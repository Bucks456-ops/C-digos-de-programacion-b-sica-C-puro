#include <stdio.h>

int main() {
char palabra1[100];
char palabra2[100];
char temp[100];
printf("Ingrese la primera palabra: ");
scanf("%s", palabra1);
printf("Ingrese la segunda palabra: ");
scanf("%s", palabra2);
printf("\nAntes:\n");
printf("Palabra_1: %s\n", palabra1);
printf("Palabra_2: %s\n", palabra2);
strcpy(temp, palabra1); 
strcpy(palabra1, palabra2); 
strcpy(palabra2, temp); 
printf("\nDespués:\n");
printf("Palabra_1: %s\n", palabra1);
printf("Palabra_2: %s\n", palabra2);
return 0;
}