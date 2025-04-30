#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"  // ya incluye #define COLM 5

void Menu(int *opc, int matrix[][COLM], int row, int col){
    do {
        printf("\n--MENU--\n");
        printf("[1] Centro [0] Salir\n");
        printf("Escoge una opcion\n>> ");
        scanf("%d", opc);
        switch(*opc){
            case 1:
                Center(matrix, row, col);
                ShowMatrix(matrix, row, col);
                break;
            case 0:
                printf("Terminando programa...\n");
                return;
            default:
                printf("Opcion invalida...\n");
                break;
        }
    } while(*opc != 0);
}

void Center(int matrix[][COLM], int row, int col){
    int dx[] = {1, 0, -1, 0}; // derecha, abajo, izquierda, arriba
    int dy[] = {0, 1, 0, -1};
    int x = row / 2;
    int y = col / 2;
    int dir = 0;
    int pasos = 1;
    int valor = 1;

    matrix[x][y] = valor++;

    while (valor <= row * col) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < pasos; j++) {
                x += dx[dir];
                y += dy[dir];
                if (x >= 0 && x < row && y >= 0 && y < col) {
                    matrix[x][y] = valor++;
                }
            }
            dir = (dir + 1) % 4;
        }
        pasos++;
    }
}

void ShowMatrix(int matrix[][COLM], int row, int col){
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}
