#include <stdio.h>

int main() {
    int numero = 1; 

    while (numero <= 500) { 
        int cuadrado = numero * numero; 
        int cubo = numero * numero * numero; 

        
        if (numero <=500) { 
            printf("%d, %d,  %d\n", numero, cuadrado, cubo);
        } else {
            printf("%d, %d, %d\n, ", numero, cuadrado, cubo);
        }

        numero++; 
    }

    return 0; 
}