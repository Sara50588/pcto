#include <stdio.h>

 float ft_sqrt (float d){
    float temp, sqrt;

    sqrt = d / 2;
    temp = 0;

    while(sqrt!=temp){
        temp = sqrt;
        sqrt = ( d/temp + temp) / 2;
    }
   
    return sqrt;
}

int main (){
    float a , b, c, d,x1,x2 , raddelt ;
   
    printf("inserisci tre valori\n");
    scanf("%f %f %f", &a, &b, &c);
    d=b*b - 4*a*c;

    if(d > 0) {
        raddelt= ft_sqrt(d);
        x1 = (b + raddelt) / (2*a);
        x2 = (b - raddelt) / (2*a);
        printf("x1 e x2 sono %f e %f\n", x1, x2);
    } else if(d == 0) {
        x1 = b / (2*a);
        printf("L'equazione ha 2 soluzioni che coincidiono: %f\n", x1);
    } else {
    
        printf(" l'equazione è impossiile\n");
    }
}
