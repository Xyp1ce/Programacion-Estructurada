/* 
	Ramon Manriquez 
	19 02 2025
	Ciclos do-while while y for
	Ejercicio de cine y dulceria, aplicar descuento cuando aplique
*/

#include <stdio.h>

int main(){
	// Declaracion de constantes
	#define VIPBOLETOS .20
	#define VIPDULCERIA .15
	#define PREMIUMBOLETOS .10

	// Declaracion e Inicializacion de variables
	int opcion, total = 0, totalBoletos = 0, totalDulceria = 0, cantidad, membresia;	

	do{
                printf("Que tipo de membresia tiene? [1] GENERAL [2] PREMIUM [3] VIP\n");
		scanf("%d", &membresia);
        }while(membresia != 1 && membresia != 2 && membresia != 3);

	do{		
		printf("\nCINE\n\n");
		printf("[1] BOLETOS [2] DULCERIA\n");	
		scanf("%d", &opcion);
		
		// Switch para el menu
		switch(opcion){
			case 1:
				printf("\nBOLETOS\n\n");
				do{
					printf("[1] GENERAL $100 | [2] ESTUDIANTE $80 | [3] TERCERA EDAD $60\n");
					scanf("%d", &opcion);
					while(getchar()!='\n'){}
					// Switch para el menu de boletos
					switch(opcion){
						case 1:
							printf("Cuantos boletos generales? ");
							scanf("%d", &opcion);
							while(getchar()!='\n'){}
							for(int i = 1; i<=opcion; i++){
								totalBoletos = totalBoletos + 100;
                                                        }
							break;			
						case 2:
							printf("Cuantos boletos de estudiante? ");
							scanf("%d", &opcion);
							while(getchar()!='\n'){}
							for(int i = 1; i<=opcion; i++){
								totalBoletos = totalBoletos + 80;
                                                        }	
							break;
						case 3:
							printf("Cuantos boletos de tercera edad? ");
							scanf("%d", &opcion);
							while(getchar()!='\n'){}
							for(int i = 1; i<=opcion; i++){
								totalBoletos = totalBoletos + 60;
							}							
							break;
					}
					printf("Desea seguir comprando boletos? [1] SI [0] NO\n");
					scanf("%d", &opcion);
					while(getchar()!='\n'){}
					while(opcion != 1 && opcion != 0){
						printf("OPCION INVALIDA\n");
						printf("[1] SI [0] NO\n");
						scanf("%d", &opcion);
						while(getchar()!='\n'){}
					}
				}while(opcion != 0);
				break;
			case 2:
				printf("\nDULCERIA\n\n");
                                do{
                                        printf("[1] PALOMITAS $50 | [2] REFRESCOS $40 | [3] NACHOS $60\n");
                                        scanf("%d", &opcion);
                                        while(getchar()!='\n'){}
                                        // Switch para el menu de boletos
                                        switch(opcion){
                                                case 1:
                                                        printf("Cuantas Palomitas? ");
                                                        scanf("%d", &opcion);
                                                        while(getchar()!='\n'){}
                                                        for(int i = 1; i<=opcion; i++){
                                                                totalDulceria = totalDulceria + 50;
                                                        }
                                                        break;
                                                case 2:
                                                        printf("Cuantos Refrescos? ");
                                                        scanf("%d", &opcion);
                                                        while(getchar()!='\n'){}
                                                        for(int i = 1; i<=opcion; i++){
                                                                totalDulceria = totalDulceria + 40;
                                                        }
                                                        break;
                                                case 3:
                                                        printf("Cuantos Nachos? ");
                                                        scanf("%d", &opcion);
                                                        while(getchar()!='\n'){}
							for(int i = 1; i<= opcion; i++){
								totalDulceria = totalDulceria +	60;
							}
							break;
					}
					printf("Desea seguir comprando en dulceria? [1] SI [0] NO\n");
                                       	scanf("%d", &opcion);
                                       	while(getchar()!='\n'){}
                                       	while(opcion != 1 && opcion != 0){
                                               	printf("OPCION INVALIDA\n");
                                               	printf("[1] SI [0] NO\n");
                                               	scanf("%d", &opcion);
                                               	while(getchar()!='\n'){}
                                     	}	
                                }while(opcion != 0);
				break;
			default:
				printf("OPCION NO VALIDA\n");
				break;
		}
		printf("Desea regresar al menu principal? [1] SI | [0] NO\n");
		scanf("%d", &opcion);
	}while(opcion == 1);
	
	// Calculo del total
	if(membresia == 1){
		total = totalBoletos + totalDulceria;
	}else if(membresia == 2){
		total = (totalBoletos - (totalBoletos * PREMIUMBOLETOS)) + totalDulceria;
	}else{
		total = (totalBoletos - (totalBoletos * VIPBOLETOS)) + (totalDulceria - (totalDulceria * VIPDULCERIA));
	}

	printf("El total es de $%d\n", total);


	return 0;
}
