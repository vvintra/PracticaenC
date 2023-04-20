#include <stdio.h>

int main() {
    int n, i, count = 0;
    char c;

    printf("Ingrese el valor de N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese el caracter %d: ", i+1);
        scanf(" %c", &c);
        switch(c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;
        }
    }

    printf("La cantidad de vocales es: %d", count);

    return 0;
}