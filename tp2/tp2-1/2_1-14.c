/*Codificar un programa que solicite los datos de N usuarios y lo almacene en una
estructura como el siguiente formato:
typdef struct {
char nombre; //almacenar sólo la inicial
int dni;
}usuario;
Mostrar por pantalla los nombres de los usuarios que fueron ingresados en mayúsculas
si su dni es un número par y en minúscula si su dni es un número impar. Por ejemplo se
ingresan 3 usuarios:
Usuario: a - DNI: 145823
Usuario: t - DNI: 7845152
Usuario: P - DNI: 748452
Debe mostrar por pantalla: a , T, P*/
#include <stdio.h>
#include <ctype.h>

#define MAX_USUARIOS 100

typedef struct {
    char nombre;
    int dni;
} usuario;

int main() {
    usuario usuarios[MAX_USUARIOS];
    int n_usuarios;
    int i;

    // Leer el número de usuarios a ingresar
    printf("Ingrese la cantidad de usuarios: ");
    scanf("%d", &n_usuarios);

    // Leer los datos de cada usuario
    for (i = 0; i < n_usuarios; i++) {
        printf("Usuario %d:\n", i+1);
        printf(" - Ingrese la inicial del nombre: ");
        usuarios[i].nombre = getchar(); // Leer el primer carácter (ignorar el Enter)
        usuarios[i].nombre = getchar(); // Leer el segundo carácter (la inicial)
        printf(" - Ingrese el DNI: ");
        scanf("%d", &usuarios[i].dni);
    }

    // Mostrar los nombres de los usuarios en mayúsculas o minúsculas según su DNI
    for (i = 0; i < n_usuarios; i++) {
        if (usuarios[i].dni % 2 == 0) {
            printf("%c ", toupper(usuarios[i].nombre));
        } else {
            printf("%c ", tolower(usuarios[i].nombre));
        }
    }
    printf("\n");

    return 0;
}
