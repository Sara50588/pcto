#include <stdio.h>

int main(){
    float a;
    float b= 273.15;
    float somma =a+b;
     printf("inserisci una temperatura in celsius\n");
    scanf("%f",&a);
    printf("sono %f in kelvin\n " , somma);
    printf("sono %f in farenhite\n" , a*9/5+32);
   printf("non esiste una temperatura minore allo zero assoluto\n");
    


}