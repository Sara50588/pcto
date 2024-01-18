#include <stdio.h>
int main () {
float a;
printf("Inserisci una temperatura in celsius\n");
scanf("%f",&a);
float b=9/5*a+32;
float c=a+273.15;
if (a>=-273.15){
printf("%f\n", b);
printf("%f\n", c);}
else {
printf("error\n");}
return 0;
}
