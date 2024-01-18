#include <stdio.h>
int main(){
    int n=2;
     int a;
     while (n |= 1){
    printf("Quanto articoli  hai preso?\n");
scanf("%d", &a);
float x= 5*a;
if (a>=30 && a<50){
printf("spendi %f\n", 0.9*x);} 
else if (a>=50){
printf("spendi %f\n", 0.85*x);}
else if (a>0 && a<30){
printf ("spendi %f\n", 1*x);}
else{break;  
}
n++;}
return 0;
}
