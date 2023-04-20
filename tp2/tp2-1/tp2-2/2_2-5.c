/*Ingresar dos números enteros positivos N1 y N2, en donde N1 tiene que ser menor que N2.
Luego sumar los números primos mayores que N1 y menores que N2, Posteriormente mostrar
por pantalla el resultado de la suma.
Por ej: se ingresan N1=1 y N2=5. Los números primos entre N1 Y N2 son 2 y 3. Entonces 2 + 3 = 5
Entonces debe mostrar por pantalla "El resultado de la suma es: 5 ”
Para resolver este problema deberá implementar las definiciones y declaraciones de las
funciones que se solicitan a continuación.
RESPETANDO LOS NOMBRES PARÁMETROS Y DE LA FUNCIÓN Y QUE PARÁMETROS RETORNA.
a- ingresarEntero:
Datos de entrada: ninguno
Proceso: permite ingresar un número entero y controlar si el mismo es positivo.
Salida: retorna el número ingresado.
b- controlarNumeros:
Datos de entrada: dos valores enteros, N1 y N2
Proceso: controlar que un valor (N1) es menor que otro (N2).
Salida: retorna una variable entera que representa si es menor o no.
c- sumarPrimos:
Datos de entrada: dos valores enteros (N1 y N2)
Proceso: sumar los números primos, comprendidos entre dos valores dados (N1
y N2) y mostrar por pantalla el valor.
Salida:no retorna nada
d- Una función para determinar si un número es primo.
Datos de entrada: un número entero
Proceso: determinar si el número es primo
Salida: retorna un entero 1= si el numero es primo, 0= si el número no es primo.
Aclaración: La suma debe efectuarse en la función “sumarPrimos” que llamará a una
segunda función (ud. puede elegir el nombre) que determinará si un número es primo.
*/
#include <stdio.h>

int ingresarEntero();
int controlarNumeros(int, int);
int esPrimo(int);
void sumarPrimos(int, int);

int main() {
    int n1, n2, control;

    n1 = ingresarEntero();
    n2 = ingresarEntero();

    control = controlarNumeros(n1, n2);
    if (control == 0) {
        printf("ERROR: el segundo numero debe ser mayor que el primero.\n");
        return 0;
    }

    sumarPrimos(n1, n2);

    return 0;
}

int ingresarEntero() {
    int n;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    return n;
}

int controlarNumeros(int n1, int n2) {
    if (n1 < n2) {
        return 1;
    } else {
        return 0;
    }
}

int esPrimo(int n) {
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void sumarPrimos(int n1, int n2) {
    int i, suma = 0;

    for (i = n1 + 1; i < n2; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    printf("El resultado de la suma es: %d\n", suma);
}
