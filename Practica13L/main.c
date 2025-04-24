/*
	Ramon Manriquez
	2210376
	Archivos multiples para un menu de cine
*/

#include <stdio.h>
//#include "funciones.h"

// CONSTANTES
#define USERS 2
#define COLUMNS 4
#define MAX 256	

// PROTOTIPOS
void ClearBuffer();
void GetName(char *name);
void GetTickets(int *tickets);

int main(void){
	// Declaracion e Inicializacino de variables
	char users[USERS]; // [0][1]
	int data[USERS][COLUMNS];
	int totalPerUser[USERS];
	int total[3];

	for(int i = 0; i < USERS; i++){
		GetName(&users[i]);
		for(int j = 0; j < COLUMNS; j++){
			switch(j){
				case 0: // Tickets
					GetTickets(&data[i][j]);
					break;
			}
		}
	}
	return 0;
}

// PROCEDIMIENTOS
void GetName(char *name){
	printf("Nombre del cliente\n>> ");
	fgets(name, MAX, stdin);
	int i = 0;
    	while (name[i] != '\0') {
        	if (name[i] == '\n') {
            		name[i] = '\0';
            		break;
        	}
        	i++;
	}
}
void GetTickets(int *tickets){
	printf("Que boleto desea comprar? [1] General [2] Estudiante [3] Tercera Edad\n>> ");
	scanf("%d", &tickets);
	ClearBuffer();
}
void ClearBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpiar buffer de entrada
}
