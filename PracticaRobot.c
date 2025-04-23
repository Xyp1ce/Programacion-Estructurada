/*
	Ramon Manriquez
	6 02 2025
	2210376
	Practica
	Registro de un Robot
*/

#include <stdio.h>

int main(){
	
	// Declaracino de variables
	char nombre[100],modelo[100];
	int fechaFabricacion, noSensores;
	float tiempoBateria, velocidadMax;

	//Pedimos los valores al usuario
	printf("Nombre del robot:\n");
	scanf("%s", nombre);
	printf("Modelo del robot:\n");
	scanf("%s", modelo);
	printf("Año de fabricacion:\n");
	scanf("%d", &fechaFabricacion);
	printf("Numero de sensores que tiene el robot:\n");
	scanf("%d", &noSensores);
	printf("Tiempo de la bateria en horas:\n");
	scanf("%f", &tiempoBateria);
	printf("Velocidad maxima del robot en m/s:\n");
	scanf("%f", &velocidadMax);
	printf("\n");

	// Mostramos la informacino al usuario
	printf("El nombre del robot es %s %s\n", nombre, modelo);
	printf("Fue fabricado en %d\n", fechaFabricacion);
	printf("Tiene %d sensores\n", noSensores);
	printf("Tiene un tiempo de bateria estimado de %.2f horas\n", tiempoBateria);
	printf("Tiene una velocidad maxima de %.2f m/s\n", velocidadMax);
	printf("\n");	

	return 0;
}
