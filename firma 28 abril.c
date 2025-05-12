#include <stdio.h>
#include <math.h>

double area(double a, double b, double c) {
double p = (a + b + c) / 2; 
return sqrt(p * (p - a) * (p - b) * (p - c)); 
}

int main() {
double a, b, c;
printf("Ingrese valor de a: ");
scanf("%lf", &a);
printf("Ingrese valor de b: ");
scanf("%lf", &b);
printf("Ingrese valor de c: ");
scanf("%lf", &c);
double rarea = area(a, b, c);
printf("El área es: %2.1f\n", rarea);
return 0;
}