#include <stdio.h>

int main (){
    float a;
    float m;
    int i;
    i=0;
    printf("inserisci un numero\n");
     scanf("%f",&a);
    while(a>=0 && m>=0){
      i++;
      a=m+a;
      printf("media:%f\n", a/i);
      printf("inserisci un numero\n");
      scanf("%f",&m);
      }
}