#include <stdio.h>

struct cilindro{
    float radio;
    float altura;
};

int main(){
    struct cilindro c;
    printf("Ingrese el radio de la base del cilindro: ");
    scanf("%f", &c.radio);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &c.altura);
    printf("Los datos ingresados son: \n");
    printf("Radio de la base: %.2f\n", c.radio);
    printf("Altura: %.2f\n", c.altura);
    return 0;
}
