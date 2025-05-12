#include <stdio.h>
int main (){
int i;
int N;

printf("Ingrese un número N: ");
scanf("%d", &N);

for (int i=1; i<=N ; i++){
for ( int N=1; N<=i; N++){
printf("*");
}
printf(" \n");

}
system ("Pause");
return 0;
}