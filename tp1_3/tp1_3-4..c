/*Ingresar N caracteres, luego presentar por pantalla la cantidad de vocales.*/

#include <stdio.h>
int main(){
    int n;
    printf("Ingresar N caracteres: ");
    scanf("%d",&n);
     do {
        printf("Ingresar N caracteres: ");
        scanf("%d",&n);
        
        if (numero > 0) {
            contador_positivos++;
        } else if (numero < 0) {
            contador_negativos++;
        } else {
            contador_ceros++;
        }
        
    } while (numero != 0);

    printf("Cantidad de ceros: %c\n", n);
    
}
