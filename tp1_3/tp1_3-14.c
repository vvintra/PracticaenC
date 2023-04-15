/*Divisores de un número natural de 4 dígitos:*/
#include <stdio.h>

int main() {
    int num, i;
    printf("Ingrese un número natural de 4 dígitos: ");
    scanf("%d", &num);
    printf("Divisores de %d: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
