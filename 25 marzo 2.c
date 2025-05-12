#include <stdio.h>

int main (){
int miarreglito [10];

int i=0;
while (i<=9){
printf ("Ingresa el valor de miarreglito[%d]:", i);
scanf("%d" , &miarreglito[i]);

printf ("El valor de miarreglito[%d]=%d\n", i, miarreglito[i]);
i++;
}

return 0;
}