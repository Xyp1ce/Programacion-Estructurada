/*
	Manriquez Guerrero Ramon
	2210376
	Funcion recursiva indirecta para el llenado de una matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constantes
#define ROWS 4
#define COLUMNS 4

// Prototipos
int Random();
void Rows(int [][COLUMNS], int cont);
void Columns(int [][COLUMNS], int f, int number, int cont);
void ShowRows(int matrix[][COLUMNS], int f, int c);
void ShowColumns(int matrix[][COLUMNS], int f, int c);
void RandomRows(int matrix[][COLUMNS], int cont);
void RandomColumns(int matrix[][COLUMNS], int f, int n, int cont);


int main(){
	// Semilla
	srand(time(NULL));
	
	// Declaracion e Inicializacion de variables
	int matrix[ROWS][COLUMNS] = {0};
	int cont = 0;
	// Comenzamos recursividad
	Rows(matrix, cont);

	// Imprimimos Matriz
	ShowRows(matrix, 0, 0);	

	printf("Agregando numeros aleatorios\n");
	// Insertar numeros Aleatorios
	RandomRows(matrix, cont);

	// Imprimimos matriz con numeros aleatorios
	ShowRows(matrix, 0, 0);
	return 0;
}

// Procedimientos
int Random(){
	return rand()%50+1;
}
void Rows(int matrix[][COLUMNS], int cont) {
	// Llenamos la matriz hasta que falten 10 espacios
	if (cont < (ROWS * COLUMNS - 10)) {
		int n = Random();
		int f = rand() % ROWS;
		Columns(matrix, f, n, cont);
	}
}
void Columns(int matrix[][COLUMNS], int f, int number, int cont) {
	int c = rand() % COLUMNS;
	// Verificamos si la posición está libre
	if (matrix[f][c] == 0) {
		matrix[f][c] = number;
		printf("Agregado [%d,%d] con el numero %d\n", f, c, number);
		// Solo incrementamos si se lleno una posicion
		cont++;
	}
	Rows(matrix, cont); // llamada recursiva
}
void ShowRows(int matrix[][COLUMNS], int f, int c){
	if(f < ROWS){
		if(c == COLUMNS){
			printf("\n");
			f++;
			c = 0;
		}	
		ShowColumns(matrix, f, c); // Recursividad Indirecta
	}
}
void ShowColumns(int matrix[][COLUMNS], int f, int c){
	if(c < COLUMNS && f != ROWS){
		printf("%3d", matrix[f][c]);
		c++;
	}
	ShowRows(matrix, f, c);
}
void RandomRows(int matrix[][COLUMNS], int cont){
	// Llenamos los 10 espacios restantes
	if(cont < 10){
		int f = rand()%ROWS;
		int n = Random();
		RandomColumns(matrix, f, n, cont);	// Recursividad Indirecta
	}
}
void RandomColumns(int matrix[][COLUMNS], int f, int number, int cont){
	int c = rand()%COLUMNS;
	if(matrix[f][c] == 0){
		matrix[f][c] = number;
		cont++;
	}	
	RandomRows(matrix, cont);
}
