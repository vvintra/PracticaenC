/*Ingresar dos números enteros, determinar si fueron ingresados en orden creciente,
decreciente o si son iguales, presentar por pantalla el mensaje correspondiente.*/
#include<stdio.h>
int main()
{

    int NumeroEntero;
    int NumeroEntero2;

    printf("Ingresar un número entero: ");
    scanf("%i", &NumeroEntero);

    printf("Ingresar un segundo número entero: ");
    scanf("%i", &NumeroEntero2);

     if (NumeroEntero == NumeroEntero2) {
        printf("Los números son iguales.\n");
    } else if (NumeroEntero < NumeroEntero2) {
        printf("Los números están en orden creciente.\n");
    } else {
        printf("Los números están en orden decreciente.\n");
    }

    return 0;
}
