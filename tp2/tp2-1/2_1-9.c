/* Codificar un programa en el que se solicita el ingreso de N carácteres, luego presentar
por pantalla un mensaje que indique cuántos carácteres son dígitos, cuántos son letra
del alfabeto en mayúscula, cuántos son letra del alfabeto en minúscula o de otro tipo de
carácter*/
#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &n);

    char c;
    int digitos = 0, mayusculas = 0, minusculas = 0, otros = 0;
    for (int i = 0; i < n; i++) {
        printf("Ingrese el caracter %d: ", i+1);
        scanf(" %c", &c);

        if (isdigit(c)) {
            digitos++;
        } else if (isupper(c)) {
            mayusculas++;
        } else if (islower(c)) {
            minusculas++;
        } else {
            otros++;
        }
    }

    printf("Resumen:\n");
    printf("Digitos: %d\n", digitos);
    printf("Letras mayusculas: %d\n", mayusculas);
    printf("Letras minusculas: %d\n", minusculas);
    printf("Otros caracteres: %d\n", otros);

    return 0;
}
