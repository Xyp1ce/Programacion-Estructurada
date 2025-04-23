#include <stdio.h> // General
#include <stdlib.h> // Funciones extras
#include <time.h> // Uso del reloj 
#include <unistd.h> // Uso del sleep

#define MAX 5

// Prototipos
int Random();
void Even();
void Odd();
void ShowEven(int []);
void ShowOdd(int []);
void Multiple(int par[], int impar[], int c, int b);

int main(){
	// Semilla
	srand(time(NULL));
	int par[MAX] = {0};
	int impar[MAX] = {0};
	int cp = 0, ci = 0, n = 0;
	Even(par, impar, cp, ci, n);
	n = Random();
	Multiple(par, impar, 0, 0);
	return 0;
}

// Procedimientos
int Random(){
	int n = rand()%99+1;
	return n;
}
void ShowEven(int par[]){
	printf("Impresion de arreglo de numeros pares\n");
	for(int i = 0; i < MAX; i++){
		printf("%3d", par[i]);
	}
	printf("\n");
}
void ShowOdd(int impar[]){
	printf("Impresion de arreglo de numeros impares\n");
	for(int i = 0; i < MAX; i++){
		printf("%3d", impar[i]);
	}
	printf("\n");
}

// La misma logica para ambas funciones, solo que una llama a la otra
void Even(int par[], int impar[], int cp, int ci, int n){
	sleep(1);
	if(cp == MAX){
		printf("\nEl arreglo de pares esta lleno\n");
	}else{
		n = Random();
		if(n%2 == 0){
			par[cp] = n;
			cp++;
			ShowEven(par);
		}
		// Recursividad Indirecta
		Odd(par, impar, cp, ci, n);
	}
}
void Odd(int par[], int impar[], int cp, int ci, int n){
	sleep(1);
	// Si ci (contador impar) es igual a MAX (5) entonces se detiene
	if(ci == MAX){
		printf("\nEl arreglo de impares esta lleno\n");
	}else{
		n = Random();
		if(n%2 == 1){
			impar[ci] = n;
			ci++;
			ShowOdd(impar);
		}
		// Recursividad indirecta
		Even(par, impar, cp, ci, n);
	}
}
void Multiple(int par[], int impar[], int c, int b){
	sleep(1);
	if(c == MAX){
		printf("Ha terminado el recorrido\n");
		if(b == 0){
			printf("No se encontro ningun elemento multiplo\n");
		}
	}else{
		int n = Random();
		printf("El elemento generado es: %d\n", n);
		// Omitimos si el elemento en la posicion c es 0
		if(par[c]%n == 0 && par[c] != 0){
			printf("El elemento %d del arreglo pares es multiplo de %d\n", par[c], n);
			b = 1;
		}
		if(impar[c]%n == 0 && impar[c] != 0	){
			printf("El elemento %d del arreglo impares es multiplo de %d\n", impar[c], n);
			b = 1;
		}
		// Volvemos a llamar ahora con el incremento en c
		c++;
		Multiple(par, impar, c, b);
	}
}

