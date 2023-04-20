/*Generar N números aleatorios e indicar la cantidad de números pares e impares.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, num, pares = 0, impares = 0;

    // Pedimos al usuario que ingrese la cantidad de números aleatorios a generar
    printf("Ingrese la cantidad de numeros aleatorios a generar: ");
    scanf("%d", &n);

    // Inicializamos la semilla de generación de números aleatorios con el valor de tiempo actual
    srand(time(NULL));

    // Generamos los N números aleatorios y contamos los pares e impares
    for (i = 0; i < n; i++) {
        num = rand(); // Generamos un número aleatorio
        if (num % 2 == 0) { // Verificamos si es par o impar
            pares++;
        } else {
            impares++;
        }
    }

    // Mostramos el resultado por pantalla
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}
