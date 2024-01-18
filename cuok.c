#include <stdio.h>

int main(){
    int a;
    int b;
    char x;
    int divisione;
    int moltiplicazione;
    int somma;
    int meno;

    

    printf("inserisci dos numeros\n");
    scanf("%d %d" ,&a, &b);
    printf("quale operazione vorresti fare, scrivi il segno\n");
    scanf(" %c",&x);

    divisione =a/b;
    moltiplicazione=a*b;
    somma=a+b;
    meno=a-b;
    if (x==':'){
        printf("il risultato della divione è %d\n" ,divisione);
    } else if (x=='*'){
        printf("il risultato della moltiplicazione è %d\n",moltiplicazione);
    }else if (x=='-') {
     
     printf("il risultato della differenza è %d\n",meno);
    } else if (x=='+'){
        printf("il risultato della somma è %d\n",somma);
    }else {
    printf("inserisci un numero coglione\n");
    }
    return 0;
    }
