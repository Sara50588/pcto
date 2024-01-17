#include <stdio.h>

int main (){
    int a;
    printf("in che anno sei nato?");
    scanf("%d" , &a);
     if (a>1969){
        printf("sei nato %d" , a-1969);
        printf("anni prima del primo passo dell'uomo sulla luna\n");
    }else if (a<1969){
        printf("sei nato %d" ,a-1969);
        printf("anni dopo del primo passo dell'uomo sulla luna\n");
    }else{
        printf("sei nato lo stesso anno del primo passo dell'uomo sulla luna\n");
    }
}
