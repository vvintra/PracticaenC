/*ingresar un número entero, luego presentar por pantalla un mensaje indicando si dicho
número es igual a cero, positivo o negativo.*/
#include<stdio.h>
int main()
{

    int NumeroEntero;

    printf("Ingresar un número entero: ");
    scanf("%i", &NumeroEntero);

    if (NumeroEntero != 0)
    {
        if (NumeroEntero > 0)
    {
        printf("Numero positivo");
    }
    else
    printf("Numero negativo");
}
    else
    printf("El 0 es igual a cero");

return 0;
}
