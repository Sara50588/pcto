#include <stdio.h>

int main (){
    int a;
    printf("inserisci la tua età\n");
    scanf("%d",&a);
    if(a<18) {
        printf("sei un un piskelletto\n");
    } else if(a<70){
        printf("puoi accedere a questi contenuti\n");

    } else if(a>70){
        printf("porcodio\n");
    }
}
    