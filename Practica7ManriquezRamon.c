/*
	Manriquez Ramon
	2210376
	Practica 7 Laboratorio
	6 03 2025
*/

#include <stdio.h>

// Declaracion de constantes
#define G 6.67e-11
#define GRAVEDAD 9.18

// Prototipos de funciones
float ConvertirVelocidad(float, int);
float CalcularFuerza(float, float);
double CalcularGravitacion(double, double, double);
float CalcularAltura(float);

int main(){

	//Declaracion e Inicializacino de variables
	int opc = 0;
	float tiempo = 0, valor = 0, masa = 0, aceleracion = 0;
	double m1 = 0, m2 = 0, distancia = 0;
	do{ // ciclo do-while para el menu
		printf("--MENU--\n");
		printf("[1] CONVERSION DE VELOCIDAD\n");
		printf("[2] CALCULO DE FUERZA\n");
		printf("[3] LEY GRAVITACIONAL UNIVERSAL\n");
		printf("[4] CALCULO DE CAIDA LIBRE\n");		
		printf("[0] SALIR\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opc);
		switch(opc){
			case 1: // CONVERSION DE VELOCIDAD
				do{ // ciclo do-while en caso de ingresar una opcion invalida
					printf("\n[1] Convertir m/s a km/h\n");
					printf("[2] Convertir km/h a m/s\n");
					printf("Ingrese una opcion: ");
					scanf("%d", &opc);
				}while(opc != 1 && opc != 2);
				if(opc == 1){ // Conversion de m/s a km/h
					printf("Ingrese el valor de m/s\n");
					scanf("%f", &valor);
					printf("EL valor de la conversion de %.2f m/s a km/h es: %.2f km/h\n", valor, ConvertirVelocidad(valor, opc));

				}else{ // Conversion de km/h a m/s
					printf("Ingrese el valor de km/h\n");
					scanf("%f", &valor);
					printf("EL valor de la conversion de %.2f km/h a km/h es: %.2f m/s\n", valor, ConvertirVelocidad(valor, opc));
				}
				break;
			case 2: // CALCULO DE FUERZAS
				printf("\nIngrese el valor de la masa: ");
				scanf("%f", &masa);
				printf("Ingrese el valor de la aceleracion: ");
                                scanf("%f", &aceleracion);
				printf("La fuerza de un objeto de masa %.2fN a %.2f m/s es de: %.2f\n",
				masa, aceleracion, CalcularFuerza(masa, aceleracion));
				break;
			case 3: // LEY GRAVITACIONAL UNIVERSAL
				printf("\nIngrese el valor de la masa 1: ");
				scanf("%lf", &m1);
				printf("Ingrese el valor de la masa 2: ");
				scanf("%lf", &m2);
				printf("Ingrese el valor de la distancia: ");
				scanf("%lf", &distancia);
				// Esta parte me daba error por lo que lo puse en dos lineas separadas
				printf("La fuerza gravitacional entre dos objetos de masa1 %.2lf y masa2 %.2lf", m1, m2); 
				printf(" con una distancia de %.2lf es de: %.20lf\n", distancia, CalcularGravitacion(m1, m2, distancia));
				break;
			case 4: // CALCULO DE CAIDA LIBRE
				printf("\nIngrese el tiempo que tarda el objeto en caer: ");
				scanf("%f", &tiempo);
				printf("La altura de un objeto que tarda %.2f segundos en caer es de : %.2f metros\n", tiempo, CalcularAltura(tiempo));				
				break;
			case 0: // SALIR
				printf("SALIENDO\n");
				return 1;
				break;
			default: // OPCION INVALIDA
				printf("OPCION INVALIDA\n");
				break;
		}
	}while(opc != 0);
	return 0;
}

// Funciones del programa

float ConvertirVelocidad(float valor, int opc){
	switch(opc){ // switch-case en base a la opcion seleccionada
		case 1: // m/s -> km/h
			return (valor * 1 * 3600)/1000;
			break;
		case 2: // km/h -> m/s
			return (valor * 1000 * 1)/3600;
			break;
	}
}
float CalcularFuerza(float masa, float aceleracion){
	return masa * aceleracion;
}
double CalcularGravitacion(double m1, double m2, double distancia){
	// Constante G equivalente a 6.67e-11
	return (G*((m1 * m2)/(distancia * distancia))); 
}
float CalcularAltura(float tiempo){
	// Constante GRAVEDAD equivalente a 9.18
	return (GRAVEDAD * (tiempo * tiempo))/2;
}
