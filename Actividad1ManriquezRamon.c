/* 
   Ramon Manriquez Guerrero
   2210376
   Practica 1
   Programacion Estructurada	
   30 01 2025
   Calcular el precio final de un producto con descuento
*/

#include <stdio.h>

int main(){
	// Inicializamos valores
	char nombre[100];
	float descuento, precio;
	
	// Pedimos el nombre del producto
	printf("Cual es el producto que va a comprar?\n");
	scanf("%s", nombre);

	// Preguntamos el precio inicial
	printf("Cual es el precio de [%s]?\n", nombre);
	scanf("%f", &precio);

	// Preguntamos el descuento
	printf("Cual es el descuento de [%s]\n", nombre);
	scanf("%f",&descuento);
	
	// Realizamos calculo de precio y mostramos al usuario
	printf("El producto [%s] cuesta $%.2f y con un descuento de %.2f tiene un precio final de $%.2f\n", nombre, precio, descuento, precio-(precio*(descuento/100)));

	return 0;	
}
