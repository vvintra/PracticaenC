/* Leer un carácter por teclado y luego presentar por pantalla un mensaje con la siguiente
leyenda "El carácter es …(mostrar el carácter ingresado)"*/

#include <stdio.h>
int main(){
    char c;
    printf("Ingrese un carácter: ");
    scanf("%c",&c);
    printf("El carácter ingresado es %c\n",c);
    return 0;
}

