int main (){
int res;
char str1[100];
char str2[100];

printf(" ingrese la primer palabra");
scanf ("%s", str1);
printf("ingrese la segunda palabra");
scanf("%s", str2);
res=strcmp(str1, str2);

if (res == 0) {
printf("ambas palabras son iguales \n");
}
if (res > 0) {
printf("%s es menor que %s.\n", str1, str2);
}
if (res < 0) {
printf("%s es menor que %s.\n", str2, str1);
}
    

printf("resultado:%d",res);
system ("Pause");
return 0;
}