#include <stdio.h>

int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
}
return n * factorial(n - 1);
}
int main() {
int num;
printf("Ingrese un numero para calcular su factorial");
scanf("%d",&num);
int resultado = factorial(num);
printf("El factorial de %d es %d.\n",num,resultado);
}

    