/*
	Ramon Manriquez Guerrero 
	2210376
	Multiarchivos, impresion de numeros en esperial en una matriz
*/

#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

#define ROWS 5
#define COLM 5

int main(void){
    int opc = 0;
    int matrix[ROWS][COLM] = {0};
    Menu(&opc, matrix, ROWS, COLM);
    return 0;
}
	
