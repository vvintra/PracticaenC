/*Diseñar un programa que permita el ingreso de dos números enteros positivos y
calcular el producto de dichos números utilizando el método de sumas sucesivas.*/
#include <stdio.h>

struct numeros {
  int n1;
  int n2;
};

int main() {
  struct numeros nums;
  int producto = 0;

  printf("Ingrese el primer número: ");
  scanf("%d", &nums.n1);

  printf("Ingrese el segundo número: ");
  scanf("%d", &nums.n2);

  for (int i = 1; i <= nums.n2; i++) {
    producto += nums.n1;
  }

  printf("El producto de %d y %d es: %d\n", nums.n1, nums.n2, producto);

  return 0;
}
