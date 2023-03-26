/*Dado el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del
círculo. Realizar el control de que el valor del radio sea un número positivo.*/

#include 
#define pi 3.14
int main(){
float radio;
float perimetro;
float diametro;

printf("Ingrese el radio de el circulo: ");
scanf("%f", &radio);

diametro = 2 * radio;

perimetro = 2 * pi * radio;

printf("El diametro ingresado %f",diametro);
printf(" El perimetro %f", perimetro);

}
return 0;