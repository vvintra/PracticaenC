/*ngresar 3 carácteres por teclado y luego presentar por pantalla un mensaje con la
siguiente leyenda "Los carácteres ingresados son …(mostrar los carácteres ingresados)"
*/

#include <stdio.h>
int main(){
    char owo, uwu, unu;
    printf("Ingresar un caracter ");
    scanf("%c",&owo);
    
    printf("Ingresar un otro caracter ");
    scanf(" %c",&uwu);
    
    printf("Ingresar un otro caracter ");
    scanf(" %c",&unu);

    printf("los carcteres ingresado es %c/%c/%c",owo,uwu,unu);
}