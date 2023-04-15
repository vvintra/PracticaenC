/* Se deben guardar los datos de N personas. Mostrar por pantalla el número de teléfono (Por ej
"caracteristica - numero") de la persona que sea más grande. Utilizar una estructura como la
siguiente:

typdef struct{
int caracteristica;
int numero;
}telefono;
typdef struct{
int dni;
int edad;
telefono tel;
}persona;*/
#include <stdio.h>

typedef struct{
    int caracteristica;
    int numero;
}telefono;

typedef struct{
    int dni;
    int edad;
    telefono tel;
}persona;

int main(){
    int n, i, max_edad = 0, max_index = 0;

    printf("Ingrese el número de personas: ");
    scanf("%d", &n);

    persona personas[n];

    for(i=0; i<n; i++){
        printf("Ingrese el DNI de la persona %d: ", i+1);
        scanf("%d", &personas[i].dni);
        printf("Ingrese la edad de la persona %d: ", i+1);
        scanf("%d", &personas[i].edad);
        printf("Ingrese la característica del teléfono de la persona %d: ", i+1);
        scanf("%d", &personas[i].tel.caracteristica);
        printf("Ingrese el número del teléfono de la persona %d: ", i+1);
        scanf("%d", &personas[i].tel.numero);
    }

int max_edad = personas[0].edad;
    int idx_max_edad = 0;
    for(int i = 1; i < n; i++){
        if(personas[i].edad > max_edad){
            max_edad = personas[i].edad;
            idx_max_edad = i;
        }
    }

    printf("El telefono de la persona mas grande es: %d - %d\n");
   return 0;
}
