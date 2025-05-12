#include <stdio.h>
#include <string.h>

int main() {
char palabra1[100];
char palabra2[100];
char resultado[200]; 
printf("Ingrese la primera palabra: ");
scanf("%s", palabra1);
printf("Ingrese la segunda palabra: ");
scanf("%s", palabra2);

strcpy(resultado, palabra1);
for (int i = 0; i < strlen(palabra1); i++) {
strcat(resultado, palabra2);
}
printf("Resultado de la concatenación: %s\n", resultado);
return 0;
}