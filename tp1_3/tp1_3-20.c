#include <stdio.h>

typedef struct {
    int vocales;
    int consonantes;
} Contador;

int main() {
    int n;
    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &n);

    Contador cont = {0, 0};  // Inicializar el contador

    for (int i = 0; i < n; i++) {
        char c;
        printf("Ingrese el caracter %d: ", i+1);
        scanf(" %c", &c);

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                cont.vocales++;
            } else {
                cont.consonantes++;
            }
        }
    }

    printf("Cantidad de vocales: %d\n", cont.vocales);
    printf("Cantidad de consonantes: %d\n", cont.consonantes);

    return 0;
}
