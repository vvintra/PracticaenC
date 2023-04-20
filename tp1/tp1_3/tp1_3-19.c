#include <stdio.h>

struct persona {
    char nombre;
    char apellido;
    int edad;
};

int main(){
    int n, i, suma_edades = 0;
    float promedio_edades;
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &n);
    struct persona personas[n];
    for (i = 0; i < n; i++){
        printf("Ingrese el nombre de la persona %d: ", i+1);
        scanf(" %c", &personas[i].nombre);
        printf("Ingrese el apellido de la persona %d: ", i+1);
        scanf(" %c", &personas[i].apellido);
        printf("Ingrese la edad de la persona %d: ", i+1);
        scanf("%d", &personas[i].edad);
        if (personas[i].edad < 0){
            printf("La edad debe ser un valor positivo. Intente de nuevo.\n");
            i--;
        }
        else {
            suma_edades += personas[i].edad;
        }
    }
    promedio_edades = (float) suma_edades / n;
    printf("El promedio de edades de las %d personas es: %.2f\n", n, promedio_edades);
    return 0;
}
