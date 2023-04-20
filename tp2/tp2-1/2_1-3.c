/*Codificar un programa en el que se solicita el ingreso de un carácter alfabético, luego
presentar por pantalla el carácter en mayúscula si el mismo fue ingresado en minúscula
y viceversa.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Ingrese un caracter alfabetico: ");
    scanf("%c", &c);
    if (islower(c)) {
        printf("El caracter ingresado es: %c\n", toupper(c));
    } else if (isupper(c)) {
        printf("El caracter ingresado es: %c\n", tolower(c));
    } else {
        printf("El caracter ingresado no es una letra alfabetica.\n");
    }
    return 0;
}
