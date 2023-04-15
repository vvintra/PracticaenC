/*Dados N1 menor que N2 (realizar este control), diseñar un programa que sume los
números enteros comprendidos entre N1 y N2. Presentar por pantalla dicha suma.
Ejemplo: N1 = 6, N2 = 12; Suma = 45*/

#include <stdio.h>

int main() {
    int n1, n2, i, suma=0;
    
    // Ingreso de valores y control de errores
    do {
        printf("Ingrese un valor entero para N1: ");
        scanf("%d", &n1);
    } while (n1 < 0);
    
    do {
        printf("Ingrese un valor entero mayor que %d para N2: ", n1);
        scanf("%d", &n2);
    } while (n2 <= n1);
    
    // Suma de los números enteros entre n1 y n2
    for (i = n1; i <= n2; i++) {
        suma += i;
    }
    
    // Presentación de la suma
    printf("La suma de los numeros enteros entre %d y %d es %d.\n", n1, n2, suma);
    
    return 0;
}
