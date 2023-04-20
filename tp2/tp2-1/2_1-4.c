#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    char c;

    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &n);

    char caracteres[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el caracter %d: ", i + 1);
        scanf(" %c", &c);

        // Verificar si el caracter ingresado es alfabético
        if (isalpha(c)) {
            caracteres[i] = tolower(c); // Convertir a minúscula
        } else {
            printf("El caracter ingresado no es alfabético. Intente de nuevo.\n");
            i--; // Retroceder el índice para volver a pedir un caracter válido
        }
    }

    printf("Los caracteres ingresados en minúsculas son: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", caracteres[i]);
    }
    printf("\n");

    return 0;
}
