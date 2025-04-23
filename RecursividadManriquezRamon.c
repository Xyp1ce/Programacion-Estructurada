#include <stdio.h>

// Prototipos
void Suma(int, int);
void Factorial(int, int);

int main(){
	// Declaracion e Inicializacion de variables
	int suma = 0, contador = 0, fact = 1, n = 5;
	// Llamamos las funciones
	Suma(suma, contador);
	printf("Resultado factorial\n");
	Factorial(fact, n);
	return 0;
}

// Procedimientos
void Suma(int suma, int contador){
	printf("La variable suma vale %d\n", suma);
	printf("El contador vale %d\n", contador);
	// Mostramos resultado final 
	if (contador == 10){
		printf("%d\n", suma);
	}else{ // Seguimos llamando a la funcion hasta que contador sea 10
		contador++;
		suma= suma + contador; 
		Suma(suma, contador);
	}
}

void Factorial(int fact, int n){
	if(n > 1){
		// Seguimos llamando a la funcion factorial hasta que n sea 1
		fact = fact*n;
		Factorial(fact, n-1);
	}else
		printf("%d\n", fact);
}
