/*Codificar un programa en el que se solicita el ingreso de un carácter, luego presentar por
pantalla un mensaje que indique si dicho carácter es un dígito, una letra del alfabeto en
mayúscula, una letra del alfabeto en minúscula o de otro tipo de carácter*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Ingrese un caracter: ");
    scanf("%c", &ch);
    
    if (isdigit(ch)) {
        printf("El caracter ingresado es un digito.\n");
    } else if (isupper(ch)) {
        printf("El caracter ingresado es una letra mayuscula.\n");
    } else if (islower(ch)) {
        printf("El caracter ingresado es una letra minuscula.\n");
    } else {
        printf("El caracter ingresado es otro tipo de caracter.\n");
    }
    
    return 0;
}
