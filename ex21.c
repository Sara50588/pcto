#include <stdio.h>
int main () {
printf("CHE triangolo stai guardando?\n");
float a;
scanf("%f", &a);
float b;
scanf("%f", &b);
float c;
scanf("%f", &c);
if (a==b && b==c)
{printf("IL TRIANGULUS è EQUILATERUS\n");}
else if (a==b || a==c || b==c)
{printf ("IL TRIANGULUS è ISOSCELUS\n");}
else 
{printf ("IL TRIANgulus è SCALENUS");}
return 0;
}