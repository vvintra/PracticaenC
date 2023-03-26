/*Dado un número entero no negativo, presentar por pantalla un mensaje indicando si dicho
número es par o impar*/

#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El numero es negativo, ingrese otoro\n");
    } else if(numero % 2 == 0 ){
        printf("El numero es par\n");
    }else 
        printf("El numero es impar\n");

    return 0;
}