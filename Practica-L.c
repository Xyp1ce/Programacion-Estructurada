/*
	Ramon Manriquez 
	6 02 2025
	2210376
	Practica 
	Calculo de Eficiencia en una linea de produccion
*/

#include <stdio.h>

int main(){
	
	// Declaracion de variables
	float horas, productosFabricados, productosDefectuosos, productosHora, eficienciaMinima;
	float TPR, ID, EP; // TPR -> Tasa de Produccion Real | ID -> Indice de Defectos | EP ->	 Eficiencia de produccion	

	// Pedimos los valores al usuario 
	printf("Cual fue el tiempo total de la operacion? ");
	scanf("%f", &horas); 
	printf("Cuantos productos se fabricaron? ");
	scanf("%f", &productosFabricados);
	printf("Cuantos productos salieron defectuosos? ");
	scanf("%f", &productosDefectuosos);
	printf("Cual es la produccion nominal? ");
	scanf("%f", &productosHora);
	printf("Cual es la eficiencia minima aceptable (En porcentaje %%)? ");
	scanf("%f", &eficienciaMinima);	
	printf("\n");

	// Calculos necesarios
	TPR = productosFabricados / horas;
	ID = (productosDefectuosos / productosFabricados) * 100;
	EP = (TPR / productosHora) * 100;
	printf("La TPR es de: %.2f productos x hora\n", TPR);
	printf("El ID es de: %.2f%%\n", ID);
	printf("La EP es de: %.2f%%\n", EP);
	printf("\n");

	// Verificacion de aspectos enfocados en la eficiencia minima aceptable
	printf("0 representa Falso | 1 representa Verdadero\n");
	printf("La Eficiencia de Produccion (EP) es mayor o igual a la eficiencia minima aceptable? %d\n", (EP >= eficienciaMinima));
	printf("EL Indice de Defectos (ID) es inferior al 5%%? %d\n", (ID < 5));
	printf("\n");		
	return 0;
}
