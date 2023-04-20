#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, x;
    double y;
    printf("Ingrese los coeficientes a, b, c, d y el valor de x: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
    y = a*pow(x, 3) + b*pow(x, 2) + c*x + d;
    printf("El resultado de la ecuación para x=%d es: %lf\n", x, y);
    return 0;
}
