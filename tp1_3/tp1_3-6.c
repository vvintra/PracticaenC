/*Se ingresan N números enteros, presentar el promedio de los pares y el promedio de los
impares. No considerar el número cero como número par ni como impar. Controlar que
el valor de N sea positivo.*/

#include <stdio.h>

int main()
#include <stdio.h>

int main() {
    int n, num, sum_pares = 0, count_pares = 0, sum_impares = 0, count_impares = 0;
    float prom_pares, prom_impares;

    printf("Ingrese la cantidad de numeros a ingresar: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: la cantidad de numeros debe ser positiva.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &num);

        if (num != 0) {
            if (num % 2 == 0) {
                sum_pares += num;
                count_pares++;
            } else {
                sum_impares += num;
                count_impares++;
            }
        }
    }

    if (count_pares > 0) {
        prom_pares = (float) sum_pares / count_pares;
        printf("El promedio de los numeros pares ingresados es: %.2f\n", prom_pares);
    } else {
        printf("No se ingresaron numeros pares.\n");
    }

    if (count_impares > 0) {
        prom_impares = (float) sum_impares / count_impares;
        printf("El promedio de los numeros impares ingresados es: %.2f\n", prom_impares);
    } else {
        printf("No se ingresaron numeros impares.\n");
    }

    return 0;
}