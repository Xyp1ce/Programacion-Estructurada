/*
	Ramon Manriquez Guerrero
	2210376
	Practica uso de funciones con valor de retorno
	procedimientos con uso de apuntadores
*/

#include <stdio.h>

// Procedimientos
double MilimetroMetro(double);
double CentimetroMetro(double);
double MetroKilometro(double);
double KilometroCentimetro(double);
double PulgadaCentimetro(double);
double PiePulgada(double);
double YardaPie(double);
double MillaKilometro(double);
void Valores(double *, double *, double *, double *, double *, double *, double *, double *);

int main(){
	double mm = 0, cm = 0, m = 0, km = 0, in = 0, ft = 0, yd = 0, ml = 0;
	int opc = 0;
	
	do{ // ciclo do-while para el menu
		printf("[1]Milimetro a Metro\n");
		printf("[2]Centimetro a Metro\n");
		printf("[3]Metro a Kilometro\n");
		printf("[4]Kilometro a Centimetro\n");
		printf("[5]PUlgada a Centimetro\n");
		printf("[6]Pie a Pulgada\n");
		printf("[7]Yarda a Pie\n");
		printf("[8]Milla a Kilometro\n");
		printf("[9]Asignacion o Reasignacion de valores\n");
		printf("[0]Salir\n");

		printf("Que opcion desea elegir?: ");
		scanf("%d", &opc);
		switch(opc){ // Switch-case para la opcion seleccionada
			case 1: // MilimetroMetro
				printf("\nEl resultado de la conversion es %lf\n\n", MilimetroMetro(mm)); 	
				break;
			case 2: // CentimetroMetro
				printf("\nEl resultado de la conversion es %lf\n\n", CentimetroMetro(cm)); 					
				break;
			case 3: // MetroKilometro
				printf("\nEl resultado de la conversion es %lf\n\n", MetroKilometro(m)); 	
				break;
			case 4: // KIlometroCentimetro
				printf("\nEl resultado de la conversion es %lf\n\n", KilometroCentimetro(km)); 	
				break;
			case 5: // PulgadaCentimetro
				printf("\nEl resultado de la conversion es %lf\n\n", PulgadaCentimetro(in)); 	
				break;
			case 6: // PiePulgada
				printf("\nEl resultado de la conversion es %lf\n\n", PiePulgada(ft)); 	
				break;
			case 7: // YardaPie
				printf("\nEl resultado de la conversion es %lf\n\n", YardaPie(yd)); 	
				break;
			case 8: // MillaKilometro
				printf("\nEl resultado de la conversion es %lf\n\n", MillaKilometro(ml)); 	
				break;
			case 9: // Asignacion o Reasignacion
				Valores(&mm, &cm, &m, &km, &in, &ft, &yd, &ml);
				printf("Los nuevos valores son\n %lf cm\n %lf mm\n %lf m\n %lf km\n %lf ft\n %lf in\n %lf yd\n %lf ml\n"
				, cm, mm, m, km, ft, in, yd, ml); 	
				break;
			case 0: // Terminar Programa
				printf("SALIENDO\n");
				return 1;
				break;
			default:
				printf("OPCION INVALILDA\n");
				break;
		}
	}while(opc != 0);

	return 0;
}

// Creacion de funciones
double MilimetroMetro(double mm){
	return mm/1000;
}
double MetroKilometro(double m){
	return m/1000;
}
double CentimetroMetro(double cm){
	return cm/100;
}
double KilometroCentimetro(double km){
	return km*10000;
}
double PulgadaCentimetro(double in){
	return in * 2.54;
}
double PiePulgada(double ft){
	return ft * 12;
}
double YardaPie(double yd){
	return yd * 3;
}
double MillaKilometro(double ml){
	return ml * 1609;
}
void Valores(double *mm, double *cm, double *m, double *km, double *in, double *ft, double *yd, double *ml){
	// Creacion de variables locales para diferenciarlas de la funcion main
	double _mm = 0, _cm = 0, _m =0, _km = 0, _in = 0, _ft = 0, _yd = 0, _ml = 0;
	printf("Asignacion o reasignacion de valores\n"); // Asignacion de todos los valores usando apuntadores 
	printf("Dame el valor para centimetros: "); scanf("%lf", &_cm);
	printf("Dame el valor para milimetros: "); scanf("%lf", &_mm);
	printf("Dame el valor para metros: "); scanf("%lf", &_m);
	printf("Dame el valor para kilometros: "); scanf("%lf", &_km);
	printf("Dame el valor para pies: "); scanf("%lf", &_ft);
	printf("Dame el valor para pulgadas: "); scanf("%lf", &_in);
	printf("Dame el valor para yardas: "); scanf("%lf", &_yd);
	printf("Dame el valor para millas: "); scanf("%lf", &_ml);
	// Modificamos la variable de la funcion main con el apuntador
	*mm = _mm; *cm = _cm; *m = _m;*km = _km; *in = _in; *ft = _ft; *yd = _yd; *ml = _ml;
}

