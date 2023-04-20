/*Codificar un programa en el que se solicita el ingreso de N carácteres, luego presentar
por pantalla las consonantes ingresadas en minúscula y las vocales en mayúscula.
*/

#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int n;
    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &n);
    
    char caracteres[n];
    printf("Ingrese los caracteres:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &caracteres[i]);
    }
    
    printf("Las vocales en mayúscula y las consonantes en minúscula son:\n");
    for (int i = 0; i < n; i++) {
        if (isalpha(caracteres[i])) {
            if (isVowel(caracteres[i])) {
                printf("%c", toupper(caracteres[i]));
            } else {
                printf("%c", tolower(caracteres[i]));
            }
        }
    }
    
    printf("\n");
    return 0;
}
