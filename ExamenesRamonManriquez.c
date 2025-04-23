/*
	Ramon Manriquez Guerrero
	12 02 2025
	2210376
	Examenes
*/

#include <stdio.h>

int main(){
	
	// Declaracion e Inicializacion de variables
	float noExamenes, calf1, calf2, calf3, calf4, calf5, suma = 0, promedio;
	char nivel[50], recompensa[50];

	// Preguntamos por el numero de examenes (de 1 a 5)
	printf("Cuantos examenes vas a revisar? ");
	scanf("%f", &noExamenes);
	// Comprobamos si el rango de examenes es correcto
	if(noExamenes > 5 || noExamenes < 1){
		printf("Rango de examamenes no valido\n");
		return 1;
	}

	// Pedimos el valor de los examanes
	if(noExamenes >= 1){
		printf("Ingresa el valor del examen 1 (0 - 100): ");
		scanf("%f", &calf1);
		if(calf1 > 100 || calf1 < 0){
			printf("Rango de calificacion no permitido");
			return 1;
		}
		suma = suma += calf1; 
	}
	if(noExamenes >= 2){
                printf("Ingresa el valor del examen 2 (0 - 100): ");
                scanf("%f", &calf2);
                if(calf2 > 100 || calf2 < 0){
                        printf("Rango de calificacion no permitido");
                        return 1;
                }
                suma = suma += calf2;
        }
	if(noExamenes >= 3){
                printf("Ingresa el valor del examen 3 (0 - 100): ");
                scanf("%f", &calf3);
                if(calf3 > 100 || calf3 < 0){
                        printf("Rango de calificacion no permitido");
                        return 1;
                }
                suma = suma += calf3;
        }
	if(noExamenes >= 4){
                printf("Ingresa el valor del examen 4 (0 - 100): ");
                scanf("%f", &calf4);
                if(calf4 > 100 || calf4 < 0){
                        printf("Rango de calificacion no permitido");
                        return 1;
                }
                suma = suma += calf4;
        }
	if(noExamenes >= 5){
                printf("Ingresa el valor del examen 5 (0 - 100): ");
                scanf("%f", &calf5);
                if(calf5 > 100 || calf5 < 0){
                        printf("Rango de calificacion no permitido");
                        return 1;
                }
                suma = suma += calf5;
        }

	// Calculamos promedio
	promedio = suma / noExamenes;

	// Obtenemos el nivel del alumno
	if(promedio >= 90 && promedio <= 100){
		sprintf(nivel, "Sobresaliente");
	}else if(promedio >= 80 && promedio <= 89){
		sprintf(nivel, "Muy Bueno");
	}else if(promedio >= 70 && promedio <= 79){
		sprintf(nivel, "Bueno");
	}else if(promedio >= 60 && promedio <= 69){
		sprintf(nivel, "Regular");
	}else if(promedio >= 40 && promedio <= 59){
		sprintf(nivel, "Deficiente");
	}else{
		sprintf(nivel, "Muy Deficiente");
	}

	// Seleccion de recompensa
	switch((int)promedio/10){
		case 10:
			sprintf(recompensa, "Diploma de Honor");
			break;
		case 9:
                        sprintf(recompensa, "Diploma de Honor");
                        break;
		case 8:
                        sprintf(recompensa, "Recococimiento Especial");
                        break;	
		case 7:
                        sprintf(recompensa, "Estrella de Esfuerzo");
                        break;
                case 6:
                        sprintf(recompensa, "Certificado de Particiapcion");
                        break;
		case 5: 
			sprintf(recompensa, "Recomendacion de Estudio");
			break;
		case 4: 
			sprintf(recompensa, "Recomendacion de Estudio");
			break;
                default:
                        sprintf(recompensa, "Sin Recompensa");
                        break;
	}

	// Mostrar resultados
	printf("\nResultados\n");
	printf("Cantidad de examenes: %.0f\n", noExamenes);
	printf("Promedio de los examenes: %.2f\n", promedio);
	printf("El alumno tiene un promedio %s\n", nivel);
	printf("La recompensa del alumno es %s\n", recompensa);	

	return 0;
}
