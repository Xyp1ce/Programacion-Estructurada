// funciones.h
#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdbool.h>

void CleanBuffer();
void InicializarArreglos(int arreglo1[], int arreglo2[], int tamano);
void ImprimirArreglos(int arreglo1[], int arreglo2[], int tamano);
int GenerarNumeroAleatorio();
bool VerificarYGuardarNumero(int numero, int arreglo1[], int arreglo2[], int *indice1, int *indice2, int tamano);
bool DeseaContinuar();

#endif
