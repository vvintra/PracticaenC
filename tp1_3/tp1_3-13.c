/*Suma de los dígitos impares de un número entero positivo de dos o más dígitos:
*/
#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Ingrese un número de dos o más dígitos: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    }
    printf("La suma de los dígitos impares es: %d\n", sum);
    return 0;
}
