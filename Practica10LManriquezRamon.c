/*
	Manriquez Ramon
 	2210376
	Llenado de asientos mediante funciones recursivas
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constantes
#define ROWS 10
#define COLUMNS 5

// Prototipos
int Random();
void FillSits(int *, int);
void ShowSits(int *, int, int);

int main(){
	srand(time(NULL));
	// Declaracion e Inicializacion de variables
	int acum = 0;
	int sits[ROWS][COLUMNS] = {0};
	FillSits(*sits, acum);
	return 0;
}

int Random(){
	int n = rand()%50+1;
}

void FillSits(int *sits, int acum){
	int n = 0;
	if(acum != 50){
		n = Random();
		if(sits[n-1] == n){
			FillSits(sits, acum);
		}else{
			sits[n-1] = n;
			ShowSits(sits, ROWS, COLUMNS); 
			acum++;
			FillSits(sits, acum);
		}
	}else{
		printf("\nAsientos llenados correctamente\n");
	}
}

void ShowSits(int *sits, int rows, int cols) {
    printf("\nEstado de los asientos:\n");
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = *((sits + i * cols) + j);

            // Determinar la etiqueta del asiento
            if (val == 0) {
                printf("[  ] "); // Asiento vacío
            } else if (val <= 10) {
                printf("[V%2d] ", val);
            } else if (val <= 25) {
                printf("[P%2d] ", val - 10);
            } else if (val <= 40) {
                printf("[G%2d] ", val - 25);
            } else {
                printf("[E%2d] ", val - 40);
            }
        }
        printf("\n"); // Nueva línea por cada fila
    }
    printf("\n");
}
