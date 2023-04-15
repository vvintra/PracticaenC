/*Ingresar un número entero positivo(Controlar que el valor sea positivo) e indicar si es
primo o no*/
#include <stdio.h>

int main() {
    int numero;
    int es_primo = 1; // inicialmente asumimos que el número es primo

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("El numero debe ser mayor que 1.\n");
        return 0;
    }

    // comprobar si el número es primo
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            es_primo = 0; // no es primo
            break;
        }
    }

    // mostrar el resultado
    if (es_primo) {
        printf("El numero %d es primo.\n", numero);
    } else {
        printf("El numero %d no es primo.\n", numero);
    }

    return 0;
}
