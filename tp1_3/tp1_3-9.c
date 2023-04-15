/*Dado un número natural de 4 o más dígitos(realizar este control), presentar por pantalla
el número y su invertido. Ejemplo : número = 34256, invertido = 65243
*/
#include <stdio.h>

#define MAX_DIGITS 10

struct Numero {
    int digitos[MAX_DIGITS];
    int cantidad_digitos;
};

struct Numero leer_numero();
void imprimir_numero(struct Numero numero);
struct Numero invertir_numero(struct Numero numero);

int main() {
    struct Numero numero = leer_numero();
    printf("Numero: ");
    imprimir_numero(numero);
    printf("\n");
    printf("Invertido: ");
    struct Numero numero_invertido = invertir_numero(numero);
    imprimir_numero(numero_invertido);
    printf("\n");
    return 0;
}

struct Numero leer_numero() {
    struct Numero numero;
    do {
        printf("Ingrese un numero entero positivo de 4 o mas digitos: ");
        scanf("%d", &numero.digitos[0]);
    } while (numero.digitos[0] < 1000);

    int i = 0;
    int numero_temporal = numero.digitos[0];
    while (numero_temporal > 0 && i < MAX_DIGITS) {
        numero.digitos[i] = numero_temporal % 10;
        numero_temporal /= 10;
        i++;
    }
    numero.cantidad_digitos = i;
    return numero;
}

void imprimir_numero(struct Numero numero) {
    for (int i = numero.cantidad_digitos - 1; i >= 0; i--) {
        printf("%d", numero.digitos[i]);
    }
}

struct Numero invertir_numero(struct Numero numero) {
    struct Numero numero_invertido;
    numero_invertido.cantidad_digitos = numero.cantidad_digitos;
    for (int i = 0; i < numero.cantidad_digitos; i++) {
        numero_invertido.digitos[i] = numero.digitos[numero.cantidad_digitos - i - 1];
    }
    return numero_invertido;
}
