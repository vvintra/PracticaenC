/*Ingresar caracteres e ir mostrando los mismos por pantalla hasta que el usuario ingrese
el carácter ‘n’(este último no debe mostrarse por pantalla).*/
#include <stdio.h>
int main()
{
char caracter;

printf("Se le mostrar el caracter que ingrese (pone el caracter n para finalizar el programa): ");

while (1)
{
scanf("%c", &caracter);
if (caracter == 'n')
{
break;
}
printf("%C", caracter);
}
return 0;
}