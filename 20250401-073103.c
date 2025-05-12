#include <stdio.h>

int main() {
int A=3;

for (int i = 0; i < 9; i++) {
printf("%d\t%d\t%d\t%d\n", A,A+2,A+4,A+6);
A += 3; 
}
return 0;
}