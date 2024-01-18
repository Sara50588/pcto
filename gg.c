#include <stdio.h>

int main(){
    char x;
    char a;
    char e ;
    char i ;
    char o ;
    char u;
    printf("inserisci una lettera\n");
    scanf("%c",&x);
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
        printf("la lettera è una vocale\n");
    } else if ( x>0) {
        printf("no ciccio inserisci una lettera\n");
    } else 
    printf("la lettera è una consonante\n");
}