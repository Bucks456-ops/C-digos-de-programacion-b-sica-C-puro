#include <stdio.h>

int main (){
int vector[10];
int i=0;
while (i<100){
vector[i]=2*(i+1);
i++;
}
i=0;
while (i<100){
printf (" 2 * %d = %d\n", i+1, vector[i]);
i++;
}
return 0;
}
