#include <stdio.h>

int main (){
    int n;
    printf("inserisci un numero\n");
    scanf("%d",&n);
    int x=2;
    while(n%x!=0){
        x=x+1;
    }
    if (n==x){
    printf("il numero è primo\n");
    }
    else{
        printf("il numero non è primo\n");
    }
    }
    


