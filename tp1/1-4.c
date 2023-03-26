/*Realizar un programa que muestre por pantalla el contenido de dos variables llamadas
"peso" y "altura" (el valor de cada una será definido por ud). La presentación de pantalla
deberá respetar el siguiente formato: "El peso de Carlos es …. Kg, mientras que su altura
es … m ".*/

#include <stdio.h>
int main()
{ 
    int peso;
    float altura;

    printf("Inggese su peso en kg ");
    scanf("%i", &peso);
    printf("Inggese su altura en m ");
    scanf("%f", &altura);

    printf("Su peso es %i", peso);

    printf(" Su altura es %f", altura);

    return 0;

}