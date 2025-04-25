// funciones.c
// Archivo con los procedimientos para el menu de cine

#include <stdio.h>
#include "funciones.h"

void GetName(char *name, int size){
	printf("Nombre del cliente\n>> ");
	fgets(name, size, stdin);
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
	scanf("%d", tickets);
	ClearBuffer();
}
void GetProduct(int *product, int opc){
		switch(opc){
			case 1: // Palomitas
				printf("Cuantas palomitas desea?\n>> ");
				scanf("%d", product);
				ClearBuffer();
				break;
			case 2: // Refresco
				printf("Cuantos refrescos desea?\n>> ");
				scanf("%d", product);
				ClearBuffer();
				break;
			case 3: // Nachos
				printf("Cuantos nachos desea?\n>> ");
				scanf("%d", product);
				ClearBuffer();
				break;
			default:
				printf("Opcion no valida, intente de nuevo.\n");
				break;
		}
}
void GetTotalPerUser(int *totalPerUser, int *data, int rows, int columns){
	int total = 0;
	for(int i = 0; i < rows; i++){
		total = 0;
		for(int j = 0; j < columns; j++){
			switch(j){
				case 0: // Tickets
					if (data[(i * columns) + j] == 1) {
						total += 100; // Precio de boleto general
					} else if (data[(i * columns) + j] == 2) {
						// The price is 80 for students
						total += 80; // Precio de boleto estudiante
					} else{ // Tercera Edad
						// The price is 60 for seniors
						total += 60; // Precio de boleto tercera edad
					}
					break;
				case 1: // Palomitas
					total += data[(i * columns) + j] * 50; // Precio de palomitas
					break;
				case 2: // Refresco
					total += data[(i * columns) + j] * 40; // Precio de refresco
					break;
				case 3: // Nachos
					total += data[(i * columns) + j] * 60; // Precio de nachos
					break;
				default:
					break;
			}
		}
		totalPerUser[i] = total; // Guardar total por usuario
	}
}
void GetTotal(int *total, int *data, int rows, int columns){
	total[0] = 0; // Total de boletos
	total[1] = 0; // Total de dulceria
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			 switch (j){
				case 0: // Tickets
					if (data[(i * columns) + j] == 1) {
						total[0] += 100; // Precio de boleto general
					} else if (data[(i * columns) + j] == 2) { 
						total[0] += 80; // Precio de boleto estudiante
					} else{ // Tercera Edad
						total[0] += 60; // Precio de boleto tercera edad
					}
					break;
				case 1: // Products
					total[1] += data[(i * columns) + j] * 50; // Precio de palomitas
					break;
				case 2: // Refresco	
					total[1] += data[(i * columns) + j] * 40; // Precio de refresco
					break;
				case 3: // Nachos
					total[1] += data[(i * columns) + j] * 60; // Precio de nachos
					break;
			 }
		}
	}
	total[2] = total[0] + total[1]; // Total general
}	
void ShowInfo(char *users, int *totalPerUser, int *data, int *total, int rows, int columns, int size){
	printf("\n%-15s %-10s %-10s %-10s %-10s %-10s\n", "Cliente", "Boleto", "Palomitas", "Refresco", "Nachos", "Total");
	for(int i = 0; i < rows; i++){
		printf("%-15s %-10d %-10d %-10d %-10d %-10d\n",
			&users[i * size],                       // Apunta al nombre del usuario i
			data[(i * columns) + 0],               // Boleto
			data[(i * columns) + 1],               // Palomitas
			data[(i * columns) + 2],               // Refresco
			data[(i * columns) + 3],               // Nachos
			totalPerUser[i]);                      // Total individual
	}
	printf("\n%-15s", "Total"); // Total general
	printf("\n%-15s %-10d", "Boletos", total[0]); // Total de boletos
	printf("\n%-15s %-10d", "Dulceria", total[1]); // Total de dulceria
	printf("\n%-15s %-10d\n", "Total", total[2]); // Total general
	
}
void ClearBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpiar buffer de entrada
}


