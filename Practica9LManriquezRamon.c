/*
	Manriquez Ramon
	2210376
	Almacenar numeros en un arreglo y una matriz siguiendo un orden ascendente sin que haya repetidos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion de constantes
#define ARRAY 30
#define MATRIXROWS 10
#define MATRIXCOLUMNS 10

// Prototipos
int Random();
void FillArray(int []);
void ShowArray(int []);
void CleanArray(int []);
void FillMatrix(int [][MATRIXCOLUMNS]);
void ShowMatrix(int [][MATRIXCOLUMNS]);
void CleanMatrix(int [][MATRIXCOLUMNS]);
void CheckDouble(int [][MATRIXCOLUMNS]);

int main(){
	// Semilla basada en la hora de la computadora
	srand(time(NULL));

	// Declaracion e Inicializacion de variables
	int array[ARRAY] = {0};
	int matrix[MATRIXROWS][MATRIXCOLUMNS] = {0};
	int opc = 0;
	char c;	// Variable char para limpiar el bufer de entrada en caso de que sea necesario
	
	do{
		printf("\n[1] Llenar Arreglo\n[2] Llenar Matriz\n[3] Limpiar Arreglo\n[4] Limpiar Matriz\n[0] Terminar Programa\n>> ");
		scanf("%d", &opc);
		while((c = getchar()) != '\n' && c != EOF){}

		switch(opc){
			case 1: // Llenar Arreglo
				FillArray(array);
				break;
			case 2: // Llenar Matrix
				FillMatrix(matrix);
				ShowMatrix(matrix);
				break;
			case 3: // Limpiar Arreglo
				CleanArray(array);
				break;
			case 4: // Limpiar Matriz
				break;	
			case 0: // Terminar Programa
				printf("Terminanado Programa...\n");
				return 1;
				break;
			default: // Opcion invalida
				printf("Opcion Invalida...\n");
				break;

		}
	}while(opc != 0);

	return 0;
}

// Procedimientos
int Random(){
	int n = rand() % 100 + 1;
	return n;
}

void FillArray(int array[]){
	for(int i = 0; i < ARRAY; i++){
		int n = Random();
		while(n > 30 || array[n - 1] == n){
			if(n == array[n - 1]){
				printf("%d es un numero repetido\n", n);
			}
			n = Random();
		}
		array[n - 1] = n;
		ShowArray(array);
	}	
	printf("\n");
}

void ShowArray(int array[]){
	for(int i = 0; i < ARRAY; i++){
		printf("%3d ", array[i]);
	}
	printf("\n");
}

void CleanArray(int array[]){
	for(int i = 0; i < ARRAY; i++){
		array[i] = 0;
	}
	for(int i = 0; i < ARRAY; i++){
		printf("%d ", array[i]);
	}
}

/*
	1 a 9
	10 a 19
	20 a 29
	30 a 39
	40 a 49
	50 a 59
 	60 a 69
	70 a 79
	80 a 89
	90 a 100

*/

void FillMatrix(int matrix[][MATRIXCOLUMNS]){
	int acum = 0;
	for(int i = 0; i < MATRIXROWS; i++){
		acum = 0;
		//for(int j = 0; j < MATRIXCOLUMNS; j++){
			int n = Random();
			switch(i){		
				case 0:
					while(acum <= 10){
						while(matrix[i][(n%10)-1] == n || n > 11){
							if(matrix[i][(n%10-1)] == n){
								printf("%d ya esta en la matriz\n", n);
							}else if(matrix [i][n - 1] == 10){
								printf("%d ya esta en la matriz\n", n);
							}
							n = Random();
						}
						if(n == 10)
							matrix[i][n - 1] = n;
						matrix[i][(n%10-1)] = n;
						acum++;
					}
				break;
                                case 1:	
					while(acum < 10){
                                        	while(matrix[i][(n%10)-1] == n || (n > 11 && n < 21)){
                                                	if(matrix[i][(n%10-1)] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10-1)] = n;
						acum++;
					}
                                break;
                                case 2:
					while(acum < 10){
	                                        while(matrix[i][(n%10)-1] == n || (n > 21 && n < 31)){
        	                                        if(matrix[0][n-1] == n){
                	                                        printf("%d ya esta en la matriz\n", n);
                        	                        }
                                	                n = Random();
                                        	}
                                        	matrix[i][n%-1] = n;
						acum++;
                                	}
				break;
                                case 3:
	                        	while(acum < 10){
				                while(matrix[i][n%-1] == n || (n > 31 && n < 41)){
        	                                        if(matrix[0][n-1] == n){
                	                                        printf("%d ya esta en la matriz\n", n);
                        	                        }
                                	                n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
                                	}
				break;
                                case 4:
					while(acum < 10){
                                        	while(matrix[i][(n%10)-1] == n || (n < 41 && n > 51)){
                                                	if(matrix[0][n-1] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
                                	}
				break;
                                case 5:
					while(acum < 10){
      	      	                                while(matrix[i][(n%10)-1] == n || (n < 51 && n > 61)){
        	                                        if(matrix[0][n-1] == n){
                      	                        	          printf("%d ya esta en la matriz\n", n);
                        	                        }
                                        	        n = Random();
                                	        }
                                        	matrix[i][(n%10)-1] = n;
						acum++;
					}
                                break;
                                case 6:
					while(acum < 10){
                                        	while(matrix[i][(n%10)-1] == n || (n < 61 && n > 71)){
                                                	if(matrix[0][n-1] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
					}
                                break;
                                case 7:
					while(acum < 10){
                                        	while(matrix[i][(n%10)-1] == n || (n < 71 && n > 81)){
                                                	if(matrix[0][n-1] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
					}
                                break;
                                case 8:
					while(acum < 10){
                                        	while(matrix[i][(n%10)-1] == n || (n < 81 && n > 91)){
                                                	if(matrix[0][n-1] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
					}
                                break;
                                case 9:	
					while(acum < 10){
	                                	        while(matrix[i][(n%10)-1] == n || n < 91){
                                                	if(matrix[0][n-1] == n){
                                                        	printf("%d ya esta en la matriz\n", n);
                                                	}
                                                	n = Random();
                                        	}
                                        	matrix[i][(n%10)-1] = n;
						acum++;
					}
                                break;
			}
		//}		
	}
}

void ShowMatrix(int matrix[][MATRIXCOLUMNS]){
	for(int i = 0; i < MATRIXROWS; i++){
		for(int j = 0; j < MATRIXCOLUMNS; j++){
			printf("%3d", matrix[i][j]); 
		}
		printf("\n");
	}
}
