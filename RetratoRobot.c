/*
	Manriquez Ramon
	2210376
	Retrato Robot
	Forma una cara. Un jugador controla el moviemneot horizontal y el otro el vertical, por lo tanto, 
	es imprescindible la compenetracion de ambos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Prototipos 
int Random();
void Game(int time, int rounds, char *, char *, char *, int *, int *);
void PutPiece(char *, int *, int);
void ShowMatrix(char *);

// Constantes
#define ROWS 5
#define	COLUMNS 5

int main(){
	// Semilla del programa
	srand(time(NULL));
	
	// Declaracion e Inicializacion de variables
	int time = 10, rounds = 1;
	int points1[3] = {0}, points2[3] = {0};
	char retrato[ROWS][COLUMNS] = {
				       {' ',' ',' ',' ',' '},
				       {' ','*',' ','*',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ','*',' ',' '},
				       {' ',' ',' ',' ',' '}};
	char retrato1[ROWS][COLUMNS] = {
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '}};
	char retrato2[ROWS][COLUMNS] = {
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '},
				       {' ',' ',' ',' ',' '}};

	// Llamamos al juego
	Game(time, rounds, *retrato1, *retrato2, *retrato, points1, points2);

}

// Pocedimientos
int Random(){
	int n = rand()%24+0;
	return n;
}
void Game(int time, int rounds, char *retrato1, char *retrato2, char *retrato, int *points1, int *points2){
	if(rounds <= 3){
		printf("Ronda %d Quedan %d segundos!\n", rounds, time);
		//sleep(1);
		time = time - 1;
		if(time > 0){
			Game(time, rounds, retrato1, retrato2, retrato, points1, points2);
		}else{
			printf("Se termino el tiempo!!\n");
			time = 10;
			rounds = rounds + 1;
			PutPiece(retrato1, points1, rounds);
			PutPiece(retrato2, points2, rounds);	
			Game(time, rounds, retrato1, retrato2, retrato, points1, points2);
		}
	}else{
		printf("Se termino el juego\n\n");
		printf("---RESULTADOS---\n\n");
		printf("Retrato Original");
		ShowMatrix(retrato);
		printf("Retrato Equipo 1\n");
		ShowMatrix(retrato1);
		printf("Retrato Equipo 2\n");
		ShowMatrix(retrato2);
	}
}

void PutPiece(char *retratox, int *points, int rounds){
	int n = Random();
	retratox[n] = '*';
	points[rounds-1] = n;
}

void ShowMatrix(char *retratox){
	printf("\n");
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMNS; j++){
			printf("[%2c]", retratox[i * COLUMNS + j]);
		}
		printf("\n");
	}
	printf("\n");
}


