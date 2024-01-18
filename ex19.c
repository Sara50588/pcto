#include <stdio.h>
int main () {
int a;
printf("Scegli un numero e scrivilo sulla keyboard\n");
scanf("%d", &a);
int b;
printf("Scegline un altro\n");
scanf("%d", &b);
int g=a%b;
if (g==0){
printf("è un multiplo\n");}
else {
printf ("non è un multiplo\n");}
return 0;
}