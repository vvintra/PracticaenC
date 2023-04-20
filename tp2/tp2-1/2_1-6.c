/*Ingresar un número entero y mostrar por pantalla el número ingresado y su valor
absoluto.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    printf("Numero ingresado: %d\n", num);
    printf("Valor absoluto: %d\n", abs(num));
    return 0;
}
