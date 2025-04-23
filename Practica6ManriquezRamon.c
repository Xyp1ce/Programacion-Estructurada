/*
	Ramon Manriquez Guerrero
	2210376
	Presupuesto de piezas automotrices aplicando descuento segun aplique
	Practica 6
*/

#include <stdio.h>

// Constantes
#define MAYORISTA .90
#define TALLER .95

// Prototipos de funciones
void Bateria(int memb, int cant);
void FiltroAceite(int memb, int cant);
void PastillaFreno(int memb, int cant);
void Amortiguador(int memb, int cant);
void Bujias(int memb, int cant);

// Funcion main
int main(){

	// Declaracion e inicializacion de variables
	int prod, memb, cant; 

	do{ // Ciclo do-while para el menu
		
		printf("Que tipo de cliente es?\n[1] Mayorista [2] Taller [3] Minorista -> ");
		scanf("%d", &memb);
		printf("\nQue producto desea comprar?\n");
		printf("[1] Bateria 12V - $1,500.00\n[2] Filtro de aceito -$250.00\n[3] Pastilla de freno - $1200.00");
		printf("\n[4] Amortiguador - $2300.00\n[5] Bujias (juego de 4) - $600.00\n");
		scanf("%d", &prod); // Preguntamos por el producto
		printf("Cuantos desea comprar? ");
		scanf("%d", &cant); // Preguntamos por la cantidad
		
		// Switch-case para determinar el producto
		switch(prod){
			case 1: // Bateria
				Bateria(memb, cant);
				break;
			case 2: // Filtro de aceite
				FiltroAceite(memb, cant);
				break;
			case 3: // Pastilla de freno
				PastillaFreno(memb, cant);
				break;
			case 4: // Amortiguador
				Amortiguador(memb, cant);
				break;
			case 5: // Bujias
				Bujias(memb, cant);
				break;
			default:
				printf("OPCION INVALIDA\n");
				break;
		}
		
		printf("Desea regresar al menu principal\n[1] SI [0] NO? -> ");
		scanf("%d", &prod);
		while(prod != 1 && prod != 0){ // Ciclo while para verificar la opcion
			printf("OPCION INVALIDA\n");
			printf("Desea regresar al menu principal\n[1] SI [0] NO? -> ");
			scanf("%d", &prod);		
		}

	}while(prod == 1);

	return 0;
}

// Procedimientos del programa

void Bateria(int memb, int cant){
	// Bateria de 12V $1500 con 10% de descuento
	switch(memb){
		case 1: // MAYORISTA
			printf("%d Baterias de 12V saldran en %.2f\n", cant, (float)((1500 * .90) * cant)*MAYORISTA);
			break;
		case 2: // TALLER
			printf("%d Baterias de 12V saldran en %.2f\n", cant, (float)((1500 * .90) * cant)*TALLER);			
			break;
		case 3: // MINORISTA
			printf("%d Baterias de 12V saldran en %.2f\n", cant, (float)((1500 * .90) * cant));
			break;
		default:
			printf("OPCION INVALIDA\n");
			break;
	}
}

void FiltroAceite(int memb, int cant){
	// Filtro de aceite $250 con 5% de descuento
	switch(memb){
		case 1: // MAYORISTA
                        printf("%d Filtro de aceite saldran en %.2f\n", cant, (float)((250 * .95) * cant)*MAYORISTA);
                        break;
                case 2: // TALLER
                        printf("%d Filtro de aceite saldran en %.2f\n", cant, (float)((250 * .95) * cant)*TALLER);
                        break;
                case 3: // MINORISTA
                        printf("%d Filtro de aceite saldran en %.2f\n", cant, (float)((250 * .95) * cant));
                        break;
                default:
                        printf("OPCION INVALIDA\n");
                        break;
	}
}

void PastillaFreno(int memb, int cant){
	// Pastillas de Freno $1200 con 0% de descuento
	switch(memb){
		case 1: // MAYORISTA
                        printf("%d Pastillas de freno saldran en %.2f\n", cant, (float)(1200 * cant)*MAYORISTA);
                        break;
                case 2: // TALLER
                        printf("%d Pastillas de freno saldran en %.2f\n", cant, (float)(1200 * cant)*TALLER);
                        break;
                case 3: // MINORISTA
                        printf("%d Pastillas de freno saldran en %.2f\n", cant, (float)(1200 * cant));
                        break;
                default:
                        printf("OPCION INVALIDA\n");
                        break;
	}
}

void Amortiguador(int memb, int cant){
	// Amortiguador $2300 con 15% de descuento
	switch(memb){
		case 1: // MAYORISTA
                        printf("%d Amortiguadores saldran en %.2f\n", cant, (float)((2300 * .85) * cant)*MAYORISTA);
                        break;
                case 2: // TALLER
                        printf("%d Amortiguadores saldran en %.2f\n", cant, (float)((2300 * .85) * cant)*TALLER);
                        break;
                case 3: // MINORISTA
                        printf("%d Amortiguadores saldran en %.2f\n", cant, (float)((2300 * .85) * cant));
                        break;
                default:
                        printf("OPCION INVALIDA\n");
                        break;
	}
}

void Bujias(int memb,  int cant){
	// Bujias (juego de 4) $600 con 8% de descuento
	switch(memb){
		case 1: // MAYORISTA
                        printf("%d Bujias (juego de 4) saldran en %.2f\n", cant, (float)((600 * .92) * cant)*MAYORISTA);
                        break;
                case 2: // TALLER
                        printf("%d Bujias (juego de 4) saldran en %.2f\n", cant, (float)((600 * .92) * cant)*TALLER);
                        break;
                case 3: // MINORISTA
                        printf("%d Bujias (juego de 4) saldran en %.2f\n", cant, (float)((600 * .92) * cant));
                        break;
                default:
                        printf("OPCION INVALIDA\n");
                        break;
	}
}



