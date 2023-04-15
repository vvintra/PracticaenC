/* En una fábrica se registra la información del mantenimiento de las N máquinas que posee la
fábrica en una estructura como la siguiente:
struct maquina{
int numeroMaquina;
char sector;
int ultimoAnioMantenimiento;
};
Se pide calcular y mostrar el porcentaje de máquinas cuyo último año de mantenimiento fue en el*/
#include <stdio.h>

struct maquina{
    int numeroMaquina;
    char sector;
    int ultimoAnioMantenimiento;
};

int main(){
    int n, i, contador = 0;
    float porcentaje = 0.0;

    printf("Ingrese el número de máquinas: ");
    scanf("%d", &n);

    struct maquina maquinas[n];

    for(i=0; i<n; i++){
        printf("Ingrese el número de la máquina %d: ", i+1);
        scanf("%d", &maquinas[i].numeroMaquina);
        printf("Ingrese el sector de la máquina %d: ", i+1);
        scanf(" %c", &maquinas[i].sector);
        printf("Ingrese el último año de mantenimiento de la máquina %d: ", i+1);
        scanf("%d", &maquinas[i].ultimoAnioMantenimiento);

        if(maquinas[i].ultimoAnioMantenimiento == 2020){
            contador++;
        }
    }

    porcentaje = ((float)contador / n) * 100;

    printf("El porcentaje de máquinas cuyo último año de mantenimiento fue en 2020 es %.2f%%\n", porcentaje);

    return 0;
}
