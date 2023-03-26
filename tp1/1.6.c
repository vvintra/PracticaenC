/*Ingresar dos números reales, luego presentar por pantalla el valor de la suma y el
producto de los números ingresados. (Resuelto)*/

#include <stdio.h>
int main()
{
    float  Numero1;
    float  Numero2;
    float  Suma;
    float  producto;
    
    printf(" Ingrese un numero real");
    scanf("%f", &Numero1);
    printf(" Ingrese otro numero real");
    scanf("%f", &Numero2);
    Suma = Numero1 + Numero2;

    printf("La suma de los dos numero es %f", Suma);

    producto = Numero1 * Numero2;

    printf(" El producto es %f",producto);


    return 0;
}