// funciones.c
// Archivo con los procedimientos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

// Inicializa los arrelgos con -1 para indicar posiciones vacias

void CleanBuffer(){
	char c;
	while((c = getchar() ) != '\n' && c != EOF); 	
}

int GenerarNumeroAleatorio(){
	return rand()%40 + 1;
}

void InicializarArreglos(int arreglo1[], int arreglo2[], int tamano){
	for(int i = 0; i < tamano; i++){
		arreglo1[i] = -1;
		arreglo2[i] = -1;
	}
}

void ImprimirArreglos(int arreglo1[], int arreglo2[], int tamano){
	printf("Arreglo 1: ");
	for(int i = 0; i < tamano; i++){
		if(arreglo1[i] != -1) printf("%3d", arreglo1[i]);
	}
	printf("\nArreglo 2: ");
	for(int i = 0; i < tamano; i++){
		if(arreglo2[i] != -1) printf("%3d", arreglo2[i]);
	}
	printf("\n");
}

bool VerificarYGuardarNumero(int numero, int arreglo1[], int arreglo2[], int *indice1, int *indice2, int tamano){
	if(numero <= 20 && *indice1 < tamano){
		arreglo1[*indice1] = numero;
		(*indice1)++;
		return true;
	}else if(numero >= 21 && *indice2 < tamano){
		arreglo2[*indice2] = numero;
		(*indice2)++;
		return true;
	}
	return false;
}

bool DeseaContinuar(){
	char respuesta;
	printf("Desea generar otro numero? (s/n)\n>> ");
	scanf("%c", &respuesta);
	CleanBuffer();
	return (respuesta == 's' || respuesta == 'S');
}
