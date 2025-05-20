#include <stdio.h>
#include <stdlib.h>
void intercambio(int *a, int *b);

int main(void)
{
int x = 2;
int y = 5;
printf("Antes x=%d, y=%d\n", x, y);
intercambio(&x, &y);
printf("Después x=%d, y=%d\n", x, y);
system("pause");
return 0;
}
void intercambio(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp; 
}