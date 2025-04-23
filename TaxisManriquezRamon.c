/* 
	Ramon Manriquez Guerrero
	13 02 2025
	2210376
	Tarifas de taxis
*/

#include <stdio.h>

int main(){
	
	// Declaracion de constantes
	#define CENTRO 250
	#define ZONAHOTELERA 300
	#define TERMINALAUTOBUSES 200
	#define PERIFERIA 350
	#define DESCUENTO .10
	
	// Declaracion e Inicializacion de variables
	int lugar, vip;	
	float total = 0;
	
	// Pedimos el lugar de destino
	printf("A donde se dirige?\n[1] Centro\n[2] Zona Hotelera\n[3] Terminal de Autobuses\n[4] Periferia\n");
	scanf("%d", &lugar);
	// En caso de seleccionar otra opcion no valida mostramos mensaje de error y terminamos el programa
	if(lugar > 4 || lugar < 1){
		printf("Opcion invalida\n");
		return 1;
	}
	printf("Es usted un cliente distinguido?\n[0] No\n[1] Si\n");
	scanf("%d", &vip);
	// EN case de seleccionar otra opcion no valid mostramos mensaje de error y terminamos el programa
	if(vip > 1 || vip < 0){
		printf("Opcion invalida\n");
		return 1;
	}
	// Switch para calcular precios de lugar
	switch(lugar){
		case(1):
			printf("Centro\n");
			if(vip == 1){
				total = CENTRO - (CENTRO * DESCUENTO);
				printf("Al ser cliente distinguido el viaje a Centro sale en %.2f\n", total); 	
                        }else{
				printf("Al no ser cliente distinguido el viaje a Centro sale en %d\n", CENTRO);
                        }
			break;
		case(2):
			printf("Zona Hotelera\n");
			if(vip == 1){
                                total = ZONAHOTELERA - (ZONAHOTELERA * DESCUENTO);
                                printf("Al ser cliente distinguido el viaje a Zona Hotelera sale en %.2f\n", total);
                        }else{
                                printf("Al no ser cliente distinguido el viaje a Zona Hotelera sale en %d\n", ZONAHOTELERA);
                        }
			break;
		case(3):
			printf("Terminal de Autobuses\n");
			if(vip == 1){
                                total = TERMINALAUTOBUSES - (TERMINALAUTOBUSES * DESCUENTO);
                                printf("Al ser cliente distinguido el viaje a Central de Autobuses sale en %.2f\n", total);
                        }else{
                                printf("Al no ser cliente distinguido el viaje a Central de Autobuses sale en %d\n", TERMINALAUTOBUSES);
                        }
			break;
		default:
			printf("Periferia\n");
			if(vip == 1){
                                total = PERIFERIA - (PERIFERIA * DESCUENTO);
                                printf("Al ser cliente distinguido el viaje a Periferia sale en %.2f\n", total);
                        }else{
                                printf("Al no ser cliente distinguido el viaje a Periferia sale en %d\n", PERIFERIA);
                        }
			break;
	}
	return 0;
}	
 
