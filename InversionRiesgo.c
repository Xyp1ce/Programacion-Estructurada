/*
 * Manriquez Ramon
 * 2210376
 * Inversion de Riesgo
 * Todos contra todos
 * Consigue mas monedas que nadie. Si paras el cilindro en un Bob-omb perderas todas las monedas
 * 
 * Recursividad - Mientras no se acabe el tiempo el juego seguira
 * 
 * Cosas tomar en cuenta 
 * - Tiempo aleatorio para pisar el cilindro
 * - Si hay un Bom-omb
 * - Cuantas monedas hay en el momento
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Prototipos
int RandomBom();
int RandomPush();
void Game(int time, int *coins, int mCoins, int lCoins, int pCoins, int dCoins);

// Constantes
#define PLAYERS 4

int main(){
    // Semilla 
    srand(time(NULL));
    
    // Declaracion e Inicializacion de variables
    int coins[PLAYERS] = {0};
    int time = 30, mCoins = 0, lCoins = 0, pCoins = 0, dCoins = 0;
    // Iniciamos Juego
    Game(time, coins, mCoins, lCoins, pCoins, dCoins);
    return 0;
}

// Procedimientos
int RandomBom(){
    int n = rand()%5+1;
    return n;
}
int RandomPush(){
    int n = rand()%3+1;
    return n;
}
void Game(int time, int *coins, int mCoins, int lCoins, int pCoins, int dCoins){
    // Mostramos tiempo restante en pantalla
    printf("Quedan %d segundos!!\n", time);
    // Decrementamos el tiempo y esperamos un segundo
    time--;
    sleep(1);
    // Por cada segundo que pasa se agrega una moneda al contenedor de cada jugador
    mCoins++;
    lCoins++;
    pCoins++;
    dCoins++;
    
    /* Explicacion de como funciona
     * Si al llamar la funcion RandomPush() el valor que regresa es 1,
     * entonces se considera que el jugador presiono el cilindro.
     if(RandomPush() == 1){
        // Mario
         * Se agregan la cantidad de monedas que haya en el contenedor del jugador en el momento.
         * Recordemos que las monedas incrementan en 1 por segundo.
        coins[0] = coins[0] + mCoins;
         * En caso de que se RandomPush() regrese 1 se verifica que RandomBom() regrese o no 5, 
         * si regresa 5 entonces se considera que el jugador tambien aplasta un Bom-omb lo que reinicia su dinero a 0.
        if(RandomBom() == 5){
            printf("O no! Mario ha pisado un Bom-omb")
            coins[0] = 0;
        }
         * En cualquier caso, la cantidad de monedas en el contenedor del jugador se reinicia
        mCoins = 0;
     }
     */
     
    // Calculo de monedas
    if(RandomPush() == 1){
        // Mario
        coins[0] = coins[0] + mCoins;
        if(RandomBom() == 5){
            printf("O no! Mario ha pisado un Bom-omb\n");
            coins[0] = 0;
        }
        mCoins = 0;
    }
    if(RandomPush() == 1){
        // Luigi
        coins[1] = coins[1] + lCoins;
        if(RandomBom() == 5){
            printf("O no! Luigi ha pisado un Bom-omb\n");
            coins[1] = 0;
        }
        lCoins = 0;
    }
    if(RandomPush() == 1){
        // Peach
        coins[2] = coins[2] + pCoins;
        if(RandomBom() == 5){
            printf("O no! Peach ha pisado un Bom-omb\n");
            coins[2] = 0;
        }
        pCoins = 0;
    }
    if(RandomPush() == 1){
        // Daisy
        coins[3] = coins[3] + dCoins;
        if(RandomBom() == 5){
            printf("O no! Daisy ha pisado un Bom-omb\n");
            coins[3] = 0;
        }
        dCoins = 0;
    }
    printf("\n");
    printf("Mario %d monedas\n", coins[0]);
    printf("Luigi %d monedas\n", coins[1]);
    printf("Peach %d monedas\n", coins[2]);
    printf("Daisy %d monedas\n", coins[3]);
    printf("\n");
    // Mientras que el tiempo sea mayor a 0 seguimos jugando
    if(time > 0){
        Game(time, coins, mCoins, lCoins, pCoins, dCoins);
    // Cuando tiempo llegue a 0 se termina el juego
    }else{
        printf("Se termino el tiempo!!\n\n");
        printf("--RESULTADOS--\n\n");
        printf("Mario %d monedas\n", coins[0]);
        printf("Luigi %d monedas\n", coins[1]);
        printf("Peach %d monedas\n", coins[2]);
        printf("Daisy %d monedas\n", coins[3]);
    }
}
