/*Realizar un programa en lenguaje C que permita ingresar N caracteres alfabéticos en
mayúsculas y los muestre en minúsculas.
Por ejemplo si se ingresa N = 4, caracteres ingresados: H, O, L, A deberá mostrar: h o l a
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &n);
    
    char c;
    printf("Ingrese los %d caracteres en mayusculas:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        if (isupper(c)) { // si es una letra mayuscula
            c = tolower(c); // convertir a minuscula
        } else { // si no es una letra mayuscula
            printf("El caracter ingresado no es una letra mayuscula.\n");
            i--; // volver a pedir el caracter
            continue;
        }
        printf("%c ", c);
    }
    
    return 0;
}
