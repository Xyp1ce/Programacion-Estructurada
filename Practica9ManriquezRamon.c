#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaración de constantes
#define COLUMNS 10  // Número fijo de columnas para la matriz

// Prototipos de funciones
void FillMatrix(int [][COLUMNS], int);
int Random();
void SearchEven(int [][COLUMNS], int [], int, int);

int main() {
    // Declaración e inicialización de variables
    int array[10] = {0};  // Arreglo para almacenar números pares encontrados
    int opc = 0, n = 0, acum = 0;  // Variables auxiliares
    int randomMatrix[n][COLUMNS];  // Declaración incorrecta de la matriz (ver dentro del case 1)

    // Inicialización del generador de números aleatorios
    srand(time(NULL));

    do {
        // Menú de opciones
        printf("[1] Llenar Matriz y Buscar Pares\n[0] Terminar\n>> ");
        scanf("%d", &opc);

        switch (opc) {
            case 1: {
                // Solicitar número de filas para la matriz
                printf("Cuantas filas tendra la matriz?\n>> ");
                scanf("%d", &n);

                // Declarar la matriz con el número de filas ingresado
                int randomMatrix[n][COLUMNS];

                // Llenar la matriz con valores aleatorios
                FillMatrix(randomMatrix, n);

                // Buscar números pares en la matriz
                SearchEven(randomMatrix, array, acum, n);
                break;
            }
            case 0: // Opción para salir del programa
                printf("Finalizando programa...\n");
                return 1;
                break;
            default: // Manejo de opción inválida
                printf("Opcion invalida...\n");
                break;
        }
    } while (opc != 0);  // Repetir hasta que el usuario elija salir

    return 0;
}

// Función que genera un número aleatorio entre 1 y 100
int Random() {
    int n = rand() % 100 + 1;
    return n;
}

// Función para llenar la matriz con valores aleatorios y mostrarla en pantalla
void FillMatrix(int randomMatrix[][COLUMNS], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            randomMatrix[i][j] = Random();  // Asignar número aleatorio
            printf("%4d", randomMatrix[i][j]);  // Imprimir el valor en formato alineado
        }
        printf("\n");  // Nueva línea al final de cada fila
    }
    printf("\n");
}

// Función para buscar los primeros 10 números pares en la matriz
void SearchEven(int randomMatrix[][COLUMNS], int array[], int acum, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if ((randomMatrix[i][j] % 2) == 0 && acum <= 9) {  // Verificar si es par y si aún hay espacio en el array
                array[acum] = randomMatrix[i][j];  // Almacenar número par en el array
                printf("%4d", array[acum]);  // Imprimir número par encontrado
                acum++;
            }
        }
    }
    printf("\n");  // Salto de línea al final de la impresión
}
