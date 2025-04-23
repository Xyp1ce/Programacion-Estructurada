/*
	Ramon Manriquez
	20 02 2025
	Ciclos While, for
	2210376
*/

#include <stdio.h>

int main(){
	// Declaracion e Inicializacino de variables
	int valor1, valor2, opc, acum = 0;
	
	do{
		printf("Ingresa una opcion\n");
		printf("[1] Suma entre rangos    [2] Impresion de numeros primos\n");
		printf("[3] Tabla de multiplicar [4] Division entre 2\n");
		printf("[0] Salir\n");
		scanf("%d", &opc); 
		// Switch case para el menu
		switch(opc){
			case 1:
				// SUMA ENTRE RANGOS
				printf("Suma entre rangos\n");
				printf("Ingresa el inicial: ");
				scanf("%d", &valor1);
				printf("Ingresa el final: ");
                                scanf("%d", &valor2);
				printf("La sumatoria entre %d y %d es de ", valor1, valor2);
				// ciclo while para la sumatoria
				if(valor2 > valor1){	
					while(valor1 <= valor2){
						acum = acum + valor1;
						valor1++;
					}
				}else if(valor1 > valor2){
					while(valor1 >= valor2){
						acum = acum + valor1;
						valor1--;
					}
				}else{
					printf("ERROR\n");
				}
				printf("%d\n\n", acum);
				break;
			case 2:
				// Impresion de numeros primos
				printf("Impresion de numeros primos\n");
				printf("Ingrese el numero limite: ");
				scanf("%d", &valor2);
				for(int i = 2; i <= valor2; i++){
					// Variable divisores almacenara la cantidad de divisores que tiene n numero
					// Un numero primo solo tiene dos posibles divisores 1 y el mismo numero
					int divisores = 0;
					for(int j = 1; j <= i; j++){
						if(i%j == 0)
							divisores++;
					}
					if(divisores == 2)
						printf("%d es primo\n", i);
				}
				printf("\n");
				break;
			case 3:
				// Tabla de multilicar
				printf("Tabla de multiplicar\n");
				printf("Ingresa el multiplo: ");
				scanf("%d", &valor1);
				for(int i = 1; i <= 10; i++){
					printf("%d x %d = %d\n", i, valor1, i * valor1);
				}
				break;
			case 4:
				// Division de n numero entre 2 hasta el 1
				printf("Division entre 2\n");
				printf("Ingresa un numero: ");
				scanf("%d", &valor1);
				while(valor1 > 1){
					valor1 = valor1 / 2;
					printf("%d\n", valor1);
				}
				break;
			case 0:
				printf("Saliendo del programa\n");
				break;
			default:
				printf("OPCION INVALIDA\n");
				break;
		}
	}while(opc != 0);
	
	return 0;
}
