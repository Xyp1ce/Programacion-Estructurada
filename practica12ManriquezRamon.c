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
void RandomRows(int matrix[][COLUMNS], int f, int c, int cont);
void RandomColumns(int matrix[][COLUMNS], int f, int c, int n, int cont);


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

	// Insertar numeros Aleatorios
	RandomRows(matrix, 0, 0, cont);

	// Imprimimos matriz con numeros aleatorios
	ShowRows(matrix, 0, 0);
	return 0;
}

// Procedimientos
int Random(){
	return rand()%50+1;
}
void Rows(int matrix[][COLUMNS], int cont){
	int n = Random();
	if(cont < (ROWS*COLUMNS-10)){
		int f = rand()%ROWS+1;
		Columns(matrix, f, n, cont);	
	}
}
void Columns(int matrix[][COLUMNS], int f, int number, int cont){
	int c = rand()%COLUMNS+1;
	matrix[f][c] = number;
	cont++;
	Rows(matrix, cont);
}
void ShowRows(int matrix[][COLUMNS], int f, int c){
	if(f < ROWS){
		if(c == COLUMNS){
			printf("\n");
			f++;
			c = 0;
		}	
		ShowColumns(matrix, f, c);
	}
}
void ShowColumns(int matrix[][COLUMNS], int f, int c){
	if(c < COLUMNS && f != ROWS){
		printf("%3d", matrix[f][c]);
		c++;
	}
	ShowRows(matrix, f, c);
}
void RandomRows(int matrix[][COLUMNS], int f, int c, int cont){
	while(cont < 10){
		int n = Random();
		if(f < ROWS && cont < (ROWS*COLUMNS-10)){
			if(c == COLUMNS){
				f++;
				c = 0;
			}
			RandomColumns(matrix, f, c, n, cont);	
		}	
	}
}
void RandomColumns(int matrix[][COLUMNS], int f, int c, int n, int cont){
	if(f < ROWS){
		if(c == COLUMNS){
			printf("\n");
			f++;
			c = 0;
		}	
		cont++;
		RandomRows(matrix, f, c, cont);
	}
}

