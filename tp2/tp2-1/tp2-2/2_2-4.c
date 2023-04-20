/*Realizar un programa en lenguaje C que permita ingresar un valor N y muestre las N letras en
mayúsculas en orden descendente.
Por ejemplo si se ingresa N = 5, deberá mostrar: Z, Y, X, W, V
Para resolver implementar:
a- una función que realice el control de que N sea positivo
b- una función que muestre las letras en mayúsculas en orden descendente.
*/
#include <stdio.h>
#include <ctype.h>

void controlarPositivo(int *n) {
    while (*n <= 0) {
        printf("Ingrese un numero positivo: ");
        scanf("%d", n);
    }
}

void mostrarLetrasMayusculasDescendentes(int n) {
    for (char c = 'Z'; c >= 'A' && n > 0; c--) {
        printf("%c ", toupper(c));
        n--;
    }
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    controlarPositivo(&n);

    printf("Las letras en mayusculas en orden descendente son: ");
    mostrarLetrasMayusculasDescendentes(n);
    printf("\n");

    return 0;
}
