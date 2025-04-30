/*
	Ramon Manriquez
	2210376
	Archivos multiples para un menu de cine
*/

#include <stdio.h>
#include "funciones.h"

// CONSTANTES
#define USERS 5
#define COLUMNS 4
#define MAX 256	

int main(void){
	// Declaracion e Inicializacino de variables
	char users[USERS][MAX]; // [0][1]
	int data[USERS][COLUMNS];
	int totalPerUser[USERS];
	int total[3] = {0}; 

	for(int i = 0; i < USERS; i++){
		GetName(&users[i][0], MAX);
		for(int j = 0; j < COLUMNS; j++){
			switch(j){
				case 0: // Tickets
					GetTickets(&data[i][j]);
					break;
				case 1: // Palomitas
					GetProduct(&data[i][j], j);
					break;
				case 2: // Refresco
					GetProduct(&data[i][j], j);
					break;
				case 3: // Nachos
					GetProduct(&data[i][j], j);
					break;
				default:
					break;
			}
		}
	}
	GetTotalPerUser(totalPerUser, &data[0][0], USERS, COLUMNS);
	GetTotal(&total[0], &data[0][0], USERS, COLUMNS); // Total de boletos y dulceria
	ShowInfo(&users[0][0], totalPerUser, &data[0][0], total, USERS, COLUMNS, MAX); // Mostrar info de cada cliente
	return 0;
}

