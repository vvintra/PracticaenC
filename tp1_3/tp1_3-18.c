#include <stdio.h>

struct caja{
    float altura;
    float ancho;
    float largo;
};

int main(){
    struct caja c;
    printf("Ingrese la altura de la caja: ");
    scanf("%f", &c.altura);
    printf("Ingrese el ancho de la caja: ");
    scanf("%f", &c.ancho);
    printf("Ingrese el largo de la caja: ");
    scanf("%f", &c.largo);
    printf("El volumen de la caja es: %.2f\n", c.altura * c.ancho * c.largo);
    return 0;
}
