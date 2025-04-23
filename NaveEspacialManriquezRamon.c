/*
	Ramon Manriquez Guerrero
	12 02 2025
	Sensores Nave Espacial
*/


#include <stdio.h>

int main(){
	
	// Inicializacion de valores
	int velocidad = 25000; // velocidad 0 - 30000
	float temperatura = 1200.0, presion = 0.5, promedio; // temperatura 50 - 2000 | presion 0.8 - 1.2	

	// Normalizacion de valores sin condicionales
	velocidad = (velocidad < 0) * 0 + (velocidad > 30000) * 30000 + (velocidad >= 0 && velocidad <= 30000) * velocidad;
	temperatura = (temperatura < 50) * 50 + (temperatura > 2000) * 2000 + (temperatura >= 50 && temperatura <= 2000) * temperatura;
	presion = (presion < 0.8) * 0.8 + (presion > 1.2) * 1.2 + (presion >= 0.8 && presion <= 1.2) * presion; 

	// Ajuste de velocidad dividiendloa entre 2 sin usar /
	velocidad = velocidad >> 1;

	// Aumento de temperatura en un 10% usando operadores
	temperatura = temperatura + (temperatura * 10 / 100);

	// Promedio de los tres valores sin usar estructuras condicionales	
	promedio = (velocidad + temperatura + presion) / 3;

	// Mostrar resultados resultantes
	printf("Velocidad ajustada: %d\n", velocidad);
	printf("Temperatura ajustada: %.2f\n", temperatura);
	printf("Presion normalizada: %.2f\n", presion);
	printf("Promedio de los tres sensores: %.2f\n", promedio);
	return 0;
}
