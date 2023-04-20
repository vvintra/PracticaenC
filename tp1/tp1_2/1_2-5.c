/*Ingresar tres números enteros, ordenarlos en forma ascendente y presentarlos por pantalla.
En caso de ser los tres iguales, imprimir un mensaje que diga: Son iguales*/

#include <stdio.h>
#include <stdio.h>
int main() {
    int num1, num2, num3, aux;

     
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&num3);

    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num1 > num3) {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if (num2 > num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    if (num1 == num2 && num2 == num3) {
        printf("Los numeros ingresados son iguales\n");
    } else {
        printf("Los numeros ingresados ordenados en forma ascendente son: %d, %d, %d\n", num1, num2, num3);
    }

    return 0;
}
