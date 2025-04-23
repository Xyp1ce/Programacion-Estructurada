/*
	Manriquez Ramon
	2210379
	Matriz definida y arreglo de 10
	Si un numero es par de la matriz, almacenarlo en el arreglo
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion de constantes
#define COLUMNS 10

// Prototipos
void FillMatrix(int [][COLUMNS], int);
int Random();
void SearchEven(int [][COLUMNS], int [], int, int);

int main(){
	// Declaracion e Inicializacion de variables
        int array[10] = {0};
        int opc = 0, n = 0, acum = 0;
        int randomMatrix[n][COLUMNS];

	srand(time(NULL));
	
       	do{
        	printf("[1] Llenar Matriz y Buscar Pares\n[0] Terminar\n>> ");
        	scanf("%d", &opc);
        	switch(opc){
			case 1:{ // Llenar Matriz
				// Numero de filas para la matriz
                		printf("Cuantas filas tendra la matriz?\n>> ");
                		scanf("%d", &n);
                		int randomMatrix[n][COLUMNS];
				FillMatrix(randomMatrix, n);
				SearchEven(randomMatrix, array, acum, n);
				break;
			}
			case 0: // Terminar
				printf("Finalizando programa...\n");
				return 1;	
				break;
			default:
				printf("Opcion invalida...\n");
				break;
		}
	}while(opc != 0);

	return 0;
}

// Procedimientos

int Random(){
	int n = rand()%100 + 1;
	return n;
}

void FillMatrix(int randomMatrix[][COLUMNS], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < COLUMNS; j++){
			randomMatrix[i][j] = Random();
			printf("%4d", randomMatrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void SearchEven(int randomMatrix[][COLUMNS], int array[], int acum, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < COLUMNS; j++){
			if((randomMatrix[i][j] % 2) == 0 && acum <= 9){
				array[acum] = randomMatrix[i][j];
				printf("%4d", array[acum]);
				acum++;
			}
		}
	}
	printf("\n");
}
