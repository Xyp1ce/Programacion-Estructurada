/*
	Ramon Manriquez Guerrero 
	2210376
	13 02 2025
	Boletos de cine
*/

#include <stdio.h>

int main(){
	
	// Declaracion de constantes
	#define VIPDULCERIA .15
	#define VIPBOLETOS .20
	#define PREMIUMBOLETOS .10

	// Declaracion de varibables
	int membresia, boleto, cantBoleto = 0, dulceria, cantDulceria = 0, precioBoleto = 0, precioDulceria = 0;
	float total = 0;

	// Pedimos la membresia al usuario
	printf("\nCINE\n\n");	
	printf("Que tipo de membresia tiene?\nNormal [1]\nPremium [2]\nVIP [3]\n");
	scanf("%d", &membresia);	
	
	// If en caso que la membresia no sea valida
	if(membresia > 3 || membresia < 1){
		printf("Membresia no valida\n");
		return 1;	
	}
	
	// Switch Case dependiendo de la membresia 
	switch(membresia){
	
		// Caso Normal
		case(1):
			printf("Membresia Normal\n");
			printf("Boletos\n[1] General $100\n[2] Estudiante $80\n[3] Tercera edad $60\n[4] Ninguno\n");
			scanf("%d", &boleto);
			// En caso de seleccionar la opcion 4 no se realiza una compra de boletos y se va directo a dulceria
			if(boleto <= 3 && boleto >= 1){
				// if para establecer el precio del boleto
				if(boleto == 1){
					precioBoleto = 100;
				}else if(boleto == 2){
					precioBoleto = 80;
				}else{
					precioBoleto = 60;
				}
				printf("Cuantos boletos desea comprar?\n");
				scanf("%d", &cantBoleto);
			} 
			printf("Dulceria\n[1] Palomitas $50\n[2] Refresco $40\n[3] Nachos $60\n[4] Ninguno\n");
			scanf("%d", &dulceria);
			// En caso de seleccinar la opcion 4 no se realiza una compra en dulceria 
			if(dulceria <= 3 && dulceria >= 1){
				// if para establecer el precio del producto
				if(dulceria == 1){
					precioDulceria = 50;
				}else if(dulceria == 2){
					precioDulceria = 40;
				}else{
					precioDulceria = 60;
				}
				printf("Cuantos desea comprar?\n");
				scanf("%d", &cantDulceria);
			}
			// Calculamos precio
			// No aplicamos ninguno descuento
			total = (cantBoleto * precioBoleto) + (cantDulceria * precioDulceria);
			printf("EL total de su compre es de $%.2f por %d boletos y %d productos de dulceria\n", total, cantBoleto, cantDulceria); 
			break;
		// Caso Premium
		case(2):
			printf("Membresia Premium\n");
			printf("Boletos\n[1] General $100\n[2] Estudiante $80\n[3] Tercera edad $60\n[4] Ninguno\n");
                        scanf("%d", &boleto);
                        // En caso de seleccionar la opcion 4 no se realiza una compra de boletos y se va directo a dulceria
                        if(boleto <= 3 && boleto >= 1){
                                // if para establecer el precio del boleto
                                if(boleto == 1){
                                        precioBoleto = 100;
                                }else if(boleto == 2){
                                        precioBoleto = 80;
                                }else{
                                        precioBoleto = 60;
                                }
                                printf("Cuantos boletos desea comprar?\n");
                                scanf("%d", &cantBoleto);
                        }
			printf("Dulceria\n[1] Palomitas $50\n[2] Refresco $40\n[3] Nachos $60\n[4] Ninguno\n");
                        scanf("%d", &dulceria);
                        // En caso de seleccinar la opcion 4 no se realiza una compra en dulceria
                        if(dulceria <= 3 && dulceria >= 1){
                                // if para establecer el precio del producto
                                if(dulceria == 1){
                                        precioDulceria = 50;
                                }else if(dulceria == 2){
                                        precioDulceria = 40;
                                }else{
                                        precioDulceria = 60;
                                }
                                printf("Cuantos desea comprar?\n");
                                scanf("%d", &cantDulceria);
                        }
                        // Calculamos precio
                        // Aplicamos descuento premium
                        total = ((cantBoleto * precioBoleto) - (cantBoleto * precioBoleto) * PREMIUMBOLETOS) + (cantDulceria * precioDulceria);
                        printf("EL total de su compre es de $%.2f por %d boletos y %d productos de dulceria\n", total, cantBoleto, cantDulceria);
			break;
		// Caso VIP
		case(3):
			printf("Membresia VIP\n");
			printf("Boletos\n[1] General $100\n[2] Estudiante $80\n[3] Tercera edad $60\n[4] Ninguno\n");
                        scanf("%d", &boleto);
                        // En caso de seleccionar la opcion 4 no se realiza una compra de boletos y se va directo a dulceria
                        if(boleto <= 3 && boleto >= 1){
                                // if para establecer el precio del boleto
                                if(boleto == 1){
                                        precioBoleto = 100;
                                }else if(boleto == 2){
                                        precioBoleto = 80;
                                }else{
                                        precioBoleto = 60;
                                }
                                printf("Cuantos boletos desea comprar?\n");
                                scanf("%d", &cantBoleto);
                        }
			printf("Dulceria\n[1] Palomitas $50\n[2] Refresco $40\n[3] Nachos $60\n[4] Ninguno\n");
                        scanf("%d", &dulceria);
                        // En caso de seleccinar la opcion 4 no se realiza una compra en dulceria
                        if(dulceria <= 3 && dulceria >= 1){
                                // if para establecer el precio del producto
                                if(dulceria == 1){
                                        precioDulceria = 50;
                                }else if(dulceria == 2){
                                        precioDulceria = 40;
                                }else{
                                        precioDulceria = 60;
                                }
                                printf("Cuantos desea comprar?\n");
                                scanf("%d", &cantDulceria);
                        }
                        // Calculamos precio
                        // Aplicamos descuento VIP
                        total = ((cantBoleto * precioBoleto) - (cantBoleto * precioBoleto) * VIPBOLETOS) + ((cantDulceria * precioDulceria) - (cantDulceria * precioDulceria) * VIPDULCERIA);
                        printf("EL total de su compre es de $%.2f por %d boletos y %d productos de dulceria\n", total, cantBoleto, cantDulceria);
			break;
	}

	return 0;
}
