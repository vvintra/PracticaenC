/*Verificación de si un número entero positivo está en formato binario:*/
#include <stdio.h>

int main() {
    int num, digit, is_binary = 1;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit != 0 && digit != 1) {
            is_binary = 0;
            break;
        }
        num /= 10;
    }
    if (is_binary) {
        printf("El número está en formato binario.\n");
    } else {
        printf("El número no está en formato binario.\n");
    }
    return 0;
}
