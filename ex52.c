#include <stdio.h>
    int ft_iterative_power(int nb, int power)
    {
        int res;
        res=nb;
        if(power<0){
            return 0;
        }
        if(power==0){
            return 1;
        }
        while(power-->1){
        res*nb;
        }
        return res;
    }
    int main (){
  int nb, power;
 scanf("%d %d", &nb, &power);
 int res=ft_iterative_power(nb, power);
 
   printf("Il risultato è=%d\n", res);
}