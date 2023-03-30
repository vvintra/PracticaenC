/*Ingresar números, hasta que se ingrese un valor igual a cero, luego presentar por pantalla la
cantidad de números ingresados.*/

#include <stdio.h>
int main()
{

int numero, contador = 0;

    do
    {
        printf("ingrese un numero (para salir del programa ingrese el 0): ");
        scanf("%d", &numero);
        contador++;
    }while (numero != 0);
         contador--;

    printf("La cantidad numero que ingresaste es %d", contador);
    return 0;
}