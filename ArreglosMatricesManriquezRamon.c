/*
	Ramon Manriquez
	2210376
	12 03 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion de constantes
#define LONGITUD 5

/*
	Instruccion
	Uso de matriz:
	Impresion de una diagonal de numeros
	Impresion de una diagonal invertida
	Impresion de un cuadrado
	Uso de arreglos:
	Despliegue de numeros aleatorios
*/

// Procedimientos
void AsignarDiagonal(int [][LONGITUD]);
void AsignarDiagonalInvertida(int [][LONGITUD]);
void AsignarCuadrado(int [][LONGITUD]);
void DesplegarMatriz(int [][LONGITUD]);
void AsignarValores(int []);
void ImprimirArreglo(int []);
int Aleatorio();

int main(){
	// Declaracion e Inicializacion de variables
	srand(time(NULL)); // Esta linea funcionara como nuestra semilla, cada vez que se ejecute el programa, tendremos una semilla diferente
	int opc = 0;
	int arreglo[LONGITUD] = {0}, matriz[LONGITUD][LONGITUD] = {0};
	do{ //do-while mientras que opc sea igual a 1
		printf("--MENU--\n");
		printf("[1] Asignar valores al arreglo\n");
		printf("[2] Desplegar arreglo\n");
		printf("[3] Matriz Diagonal\n");
		printf("[4] Matriz Diagonal Invertida\n");
		printf("[5] Matriz Cuadrado\n");
		printf("[6] Desplegar Matriz\n");
		printf("Elige una opcion:\n>>");
		scanf("%d", &opc);
		
		switch(opc){ // switch-case para el menu 
			case 1: // Asignar valores
				AsignarValores(arreglo); 
				break;
			case 2: // Desplegar Arreglo
				ImprimirArreglo(arreglo);
                                break;
			case 3: // Matriz Diagonal
				AsignarDiagonal(matriz);
                                break;
			case 4: // Matriz Diagonal Invertida
                                AsignarDiagonalInvertida(matriz);
				break;
			case 5: // Matriz Cuadrado
				AsignarCuadrado(matriz);
                                break;
			case 6: // Deplegar Matriz
				DesplegarMatriz(matriz);
                                break;
			default: // INVALIDO
				printf("\nOPCION INVALIDA");
                                break;		
		}

	printf("\nDeseas regresar al menu?\n[1] SI\n[2] NO\n>> ");
	scanf("%d", &opc);
	}while(opc == 1);


	return 0;
}

// Procedimientos
int Aleatorio(){
	int n = rand() % 99 + 10; // n sera un valor entre 10 y 99
	return n; // n sera utilizada en la funcion AsignarValores();
}

void AsignarDiagonal(int matriz[][LONGITUD]){
	for(int f = 0; f < LONGITUD; f++){
                for(int c = 0; c < LONGITUD; c++){
			matriz[f][c] = 0; // Reiniciamos matriz
                        if(f == c){ // Si filas y columnas son iguales, asignamos esa casilla a 1
				matriz[f][c] = 1;
                	}
		}
        }
}

void AsignarDiagonalInvertida(int matriz[][LONGITUD]){
	for(int f = 0; f < LONGITUD; f++){
                for(int c = 0; c < LONGITUD; c++){
			matriz[f][c] = 0;
                        if((f + c)  == LONGITUD - 1){ // Si la suma de filas y columas es igual al tamano de la matriz - 1, asignamos esa casilla a 1
                                matriz[f][c] = 1;
                        }
                }
        }
}

void AsignarCuadrado(int matriz[][LONGITUD]){
	for(int f = 0; f < LONGITUD; f++){
                for(int c = 0; c < LONGITUD; c++){
                        matriz[f][c] = 0;
                        if(f == 0 || c == 0 || f == (LONGITUD - 1) || c == (LONGITUD - 1)){ 
			// Si la fila o columna son las primeras, asignamos a 1 esa fila y columna
			// Si la fila o columna son las ultimas LONGITUD - 1, asignamos a 1 esa fila y columna
                                matriz[f][c] = 1;
                        }
                }
        }	
}

void AsignarValores(int arreglo[]){
	for(int i = 0; i < LONGITUD; i++){
		arreglo[i] = Aleatorio(); // Mandamos a llamar la funcion aleatorio para asignar diferentes valores al arreglo
	}
	printf("Arreglo lleno, valores asignados\n");
}

void ImprimirArreglo(int arreglo[]){
	for(int i = 0; i < LONGITUD; i++){
                printf("%d ",arreglo[i]); // Imprimimos el arreglo con un ciclo for
        }
}

void DesplegarMatriz(int matriz[][LONGITUD]){
	for(int f = 0; f < LONGITUD; f++){
		for(int c = 0; c < LONGITUD; c++){
			printf("%d ", matriz[f][c]); // Imprimimos la matriz con un ciclo for
		}
		printf("\n"); // Separamos filas y columnas con un salto de linea
	}
}
