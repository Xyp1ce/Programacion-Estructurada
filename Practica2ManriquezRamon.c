/* 
	Ramon Manriquez 
	5 02 2025
	Apliar operadores aritmeticos para calculos numericos
*/

#include <stdio.h>

int main(){
	
	printf("\n");

	// Declaracion de variables
	int n1, n2;
	// Declaracion de variables para calculo
	int suma, resta, multiplicacion, modulo;
	float division;	
	// Declaracion de variables de operacion relacional
	int igual, diferente, mayor, menor, mayorIgual, menorIgual;
	// Declaracion de variables de peracion logica
	int yy, oo, no;

	// Pedimos los datos
	printf("Ingresa el primer valor (n1): ");
	scanf("%d",&n1);
	printf("Ingresa el primer valor (n2): ");
        scanf("%d",&n2);
   
	// Operaciones artimeticas
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	modulo = n1 % n2;
	division = (float)n1 / n2;

	// Operaciones relacionles
	igual = n1 == n2;
	diferente = n1 != n2;
	mayor = n1 > n2;
	menor = n1 < n2;
	mayorIgual = n1 >= n2;
	menorIgual = n1 <= n2;
	
	// Operaciones logicas
	yy = (n1 > n2) && (n1 >= n2);
	oo = (n1 == n2)|| (n1 != 3);
	no = !(n1 != n2);

       	printf("suma %d + %d = %d\n", n1, n2, suma);
	printf("resta %d - %d  = %d\n", n1, n2, resta);
	printf("multiplicacion %d * %d = %d\n", n1, n2, multiplicacion);
	printf("modulo %d %% %d = %d\n", n1, n2, modulo);
	printf("division %d / %d = %f\n", n1, n2, division);
        
	printf("igual %d == %d = %d\n", n1, n2, igual);
	printf("diferente %d != %d = %d\n", n1, n2, diferente);
	printf("mayor %d > %d = %d\n", n1, n2, mayor);
	printf("menor %d < %d = %d\n", n1, n2, menor);
	printf("mayorIgual %d >= %d = %d\n", n1, n2, mayorIgual);
	printf("menorIgual %d <= %d = %d\n", n1, n2, menorIgual);
	
	printf("yy (%d > %d) && (%d >= %d) = %d\n",n1, n2, n1, n2,  yy);
	printf("oo (%d  == %d) || (%d != 3) = %d\n",n1, n2, n1,  oo);
	printf("no !(%d != %d) = %d\n", n1, n2, no); 

	printf("\n");
	return 0;
}


