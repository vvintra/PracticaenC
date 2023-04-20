/*Ingresar un número, luego presentar por pantalla el factorial del mismo*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int numero , factorial = 1 ;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    for (int uwu = 1; uwu<=numero; uwu++){
        factorial *= uwu;
    }

    printf("El factorial de %d es %d", numero, factorial);
    
    return 0;
}
