#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Prototipos
int Aleatorio();
void Saltar(int, int, int, int, int);

int main(){
	// Generamos semilla
	srand(time(NULL));
	// Declaracion e Inicializacion de variables
	int m = 0, l = 0, p = 0, d = 0, tiempo = 10;
	Saltar(tiempo, m, l, p, d);
	return 0;
}

// Procedimientos

int Aleatorio(){
	int n = 0;
	n = rand()%5 + 1;
	return n;
}

void Saltar(int tiempo, int m, int l, int p , int d){
	if (tiempo == 0){ // Verificamos si el tiempo ya se termino
		printf("\nPUntaje Final:\n");
		// Mostramos puntuacion finales
		printf("\nM: %d L: %d P: %d D: %d\n", m, l, p, d);
	}else{
		// Sumamos puntajes aleatorios entre 1 y 5
		m = m + Aleatorio();
		l = l + Aleatorio();
		p = p + Aleatorio();
		d = d + Aleatorio();
		printf("\nPuntuacion Actual: \nM: %d L: %d P: %d D: %d\n", m,l,p,d);
		printf("\nQuedan %d segundos\n", tiempo);
		// Esperamos un segundo para no mostrar todo de golpe
		sleep(1);
		// Quitamos un segundo al total
		tiempo = tiempo - 1;
		// Hacemos recursividad con la funcion original hasta que tiempo sea 0
		Saltar(tiempo, m,l,p,d);
	}
}
