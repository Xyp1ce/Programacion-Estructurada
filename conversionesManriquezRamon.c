/* 
	Ramon Manriquez 
	26 02 2025
	Ejercicio de conversion de unidades
*/

#include <stdio.h>

// Prototipos de Funciones
void MilimetrosMetros(double mm);
void CentimetrosMilimetros(double cm);
void MetrosKilometros(double m);
void KilometrosMetros(double km);
void PulgadasCentimetros(double in);
void PiesPulgadas(double ft);
void YardasPies(double yd);
void MillasKilometros(double ml);

int main(){
	
	// Declaracion e Inicializacion de variables
	double mm = 0, m = 0, cm = 0, km = 0, in = 0, ft = 0, yd = 0, ml = 0; 	
	int opc;
	
	// do-while para el menu
	do{
		printf("\n1>Milimmetros a Metros\n2>Centimetros a Milimetros\n3>Metros a Kilometros\n4>Kilometros a Metros\n5>Pulgadas a Centimetros");
		printf("\n6> Pies a Pulgadas\n7>Yardas a Pies\n8>Millas a Kilometros\n9>Salir\n");
		printf("Selecciona una opcion ");
		scanf("%d", &opc);
		
		switch(opc){
			//Milimetro a metro
			case 1:
				printf("Dame al valor de milimetros a convertir: ");
				scanf("%lf", &mm);
				MilimetrosMetros(mm);
				break;
			// Centimetro a milimetro
			case 2:
				printf("Dame al valor de centimetros a convertir: ");
                                scanf("%lf", &cm);
				CentimetrosMilimetros(cm);
				break;
			// Metros a kilometros
			case 3:
				printf("Dame al valor de Metros a convertir: ");
                                scanf("%lf", &m);
				MetrosKilometros(m);
                                break;
			// Kilometros a metros
			case 4:
                                printf("Dame al valor de Kilometros a convertir: ");
				scanf("%lf", &km);
				KilometrosMetros(km);
				break;
			// Pulgada a centimetro
			case 5:
				printf("Dame al valor de pulgadas a convertir: ");
                                scanf("%lf", &in);
				PulgadasCentimetros(in);
                                break;
			// Pies a pulgadas
			case 6:
                               	printf("Dame al valor de pies a convertir: ");
                                scanf("%lf", &ft);
				PiesPulgadas(ft);
				break;
			// Yardas a pies
			case 7:
                                printf("Dame al valor de yardas a convertir: ");
                                scanf("%lf", &yd);
				YardasPies(yd);
				break;	
			/ Millas a kilometros	
			case 8:
                                printf("Dame al valor de millas a convertir: ");
                                scanf("%lf", &ml);
				MillasKilometros(ml);
				break;
			case 9:
				printf("SALIENDO\n");
				return 1; // Nos salimos del codigo
			default:
				printf("OPCION INCORRECTA\n");
				break;
		}
		printf("Desea regresar al menu principal?");
		scanf("%d", &opc);
	}while(opc == 1); // Repetimos en caso de seleccionar 1

	return 0;
}

// Procedimientos del programa
void MilimetrosMetros(double mm){
        printf("Conversion de Milimetros a metros\n");
        printf("El resultado es %.2lf\n", mm/1000);
}

void CentimetrosMilimetros(double cm){
        printf("Conversion de Centimetros a Milimetros\n");
        printf("El resultado es %.2lf\n", cm * 10);
}

void MetrosKilometros(double m){
        printf("Conversion de Metros a Kilometros\n");
        printf("El resultado es %.2lf\n", m / 1000);
}

void KilometrosMetros(double km){
        printf("Conversion de Kilometros a Metros\n");
        printf("El resultado es %.2lf\n", km * 1000);
}

void PulgadasCentimetros(double in){
        printf("Conversion de Pulgadas a Centimetros\n");
        printf("El resultado es %.2lf\n", in * 2.54);
}

void PiesPulgadas(double ft){
        printf("Conversion de Pies a Pulgadas\n");
        printf("El resultado es %.2lf\n", ft * 12);
}

void YardasPies(double yd){
        printf("Conversion de Yardas a Pies\n");
        printf("El resultado es %.2lf\n", yd * 3);
}

void MillasKilometros(double ml){
        printf("Conversion de Millas a Kilometros\n");
        printf("El resultado es %.2lf\n", ml * 1.609);
}
