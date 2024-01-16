#include <stdio.h>
 
 int main(){
    float a;
    float b;
    float c;
    printf("inserisci 3 valori\n");
    scanf("%f %f %f" , &a, &b, &c);
    if (a+b>c){
        if(b+c>a){
            if(a+c>b) {
                printf("il triangolo esiste\n");
    }}}else {
    printf("il triangolo è una cagata cioè non esiste\n");
    }

 }