// Leer cuatro números enteros, calcular y presentar por pantalla la media aritmética
//(promedio) de los números ingresados.

#include <stdio.h>

int main() 
{
    int Numero1;
    int Numero2;
    int Numero3;
    int Numero4;
    int Suma;

    printf(" Eh culiao ingresame un numero");
    scanf("%i", &Numero1);
    printf(" Eh culiao ingresame otro numero");
    scanf("%i", &Numero2);
    printf(" Eh culiao ingresame otro numero");
    scanf("%i", &Numero3);
    printf(" Eh culiao ingresame otro numero");
    scanf("%i", &Numero4);
    Suma = Numero1 + Numero2 + Numero3 + Numero4;

    printf("la suma de los dos numero es %i", Suma);

    printf("El promedio es %i", Suma / 4);

    return 0;
}
