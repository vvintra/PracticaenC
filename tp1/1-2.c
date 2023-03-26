//Leer dos números enteros, calcular y presentar por pantalla el producto, la suma y la media aritmética(promedio)
//de los números ingresados

 
#include <stdio.h>

int main()
{
    int Numero1;
    int Numero2;
    int Suma;
    printf(" Eh culiao ingresame un numero");
    scanf("%i", &Numero1);
    printf(" Eh culiao ingresame otro numero");
    scanf("%i", &Numero2);
    Suma = Numero1 + Numero2;

    printf("La suma de los dos numero es %i", Suma);

    printf(" El promedio es %i", Suma / 2);

    return 0;
}
