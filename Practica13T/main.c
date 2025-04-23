// main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

// Constantes
#define TAM 10

int main(void){
	// Declaracion e Inicializacion de variables
	int arreglo1[TAM], arreglo2[TAM];
	int indice1 = 0, indice2 = 0;
	int numero = 0;

	// Inicializamos arreglos
	InicializarArreglos(arreglo1, arreglo2, TAM);
	
	// Semilla del programa
	srand(time(NULL));

	// Llenamos los arreglos
	do{
		numero = GenerarNumeroAleatorio();
		printf("Numero generado > %d\n", numero);
		// Llamamos a la funcion para verificar y guardar
		if(VerificarYGuardarNumero(numero, arreglo1, arreglo2, &indice1, &indice2, TAM)){
			printf("Numero almacenado correctamente\n");
		}else{
			printf("El arreglo correspondiente ya esta lleno\n");
		}
		if(!DeseaContinuar()){
			break;
		}
	}while(indice1 < TAM && indice2 < TAM);

	// Imprimimos arreglos
	ImprimirArreglos(arreglo1, arreglo2, TAM);
	return 0;
}
