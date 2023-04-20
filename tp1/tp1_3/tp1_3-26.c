/*Modificar el programa anterior para añadir un campo en la estructura teléfono que almacene un
carácter dependiendo si es un teléfono fijo o un celular. Podrá almacenar un carácter 'F' si es fijo
o 'C' si es un celular, en caso de ingresar otro carácter volver a solicitar su ingreso.
Modificar el programa para que muestre por pantalla el número de celular, indicando si es un un
número FIJO o CELULAR, de la persona que sea más grande en edad . */
#include <stdio.h>

typedef struct{
    int caracteristica;
    int numero;
    char tipo; // nuevo campo para indicar si es un teléfono fijo o celular
} telefono;

typedef struct{
    int dni;
    int edad;
    telefono tel;
} persona;

// función para encontrar la persona de mayor edad con un número de teléfono celular
persona mayor_edad_celular(persona personas[], int n) {
    int i;
    persona mayor = personas[0];
    for (i = 1; i < n; i++) {
        if (personas[i].edad > mayor.edad && personas[i].tel.tipo == 'C') {
            mayor = personas[i];
        }
    }
    return mayor;
}

int main() {
    int n, i;
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &n);

    persona personas[n];

    // ingreso de datos
    for (i = 0; i < n; i++) {
        printf("Ingrese el DNI de la persona %d: ", i+1);
        scanf("%d", &personas[i].dni);
        printf("Ingrese la edad de la persona %d: ", i+1);
        scanf("%d", &personas[i].edad);
        printf("Ingrese la característica del teléfono de la persona %d: ", i+1);
        scanf("%d", &personas[i].tel.caracteristica);
        printf("Ingrese el número del teléfono de la persona %d: ", i+1);
        scanf("%d", &personas[i].tel.numero);
        do {
            printf("Ingrese el tipo de teléfono (F para fijo, C para celular) de la persona %d: ", i+1);
            scanf(" %c", &personas[i].tel.tipo);
        } while (personas[i].tel.tipo != 'F' && personas[i].tel.tipo != 'C');
    }

    // encontrar la persona de mayor edad con un número de teléfono celular
    persona mayor_celular = mayor_edad_celular(personas, n);

    // mostrar el resultado
    printf("El número de celular de la persona de mayor edad es: %d - %d (%s)\n", 
        mayor_celular.tel.caracteristica, mayor_celular.tel.numero, 
        mayor_celular.tel.tipo == 'F' ? "Fijo" : "Celular");

    return 0;
}
