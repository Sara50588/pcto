#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, delta, radiceDelta, soluzione1, soluzione2;


    printf("Inserisci il coefficiente a: ");
    scanf("%f", &a);

    printf("Inserisci il coefficiente b: ");
    scanf("%f", &b);

    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if(delta > 0) {
        radiceDelta = sqrt(delta);
        soluzione1 = (-b + radiceDelta) / (2*a);
        soluzione2 = (-b - radiceDelta) / (2*a);
        printf("Le soluzioni sono %.2f e %.2f\n", soluzione1, soluzione2);
    } else if(delta == 0) {
        soluzione1 = -b / (2*a);
        printf("L'equazione ha una soluzione doppia: %.2f\n", soluzione1);
    } else {
    
        printf("impossiile\n");
    }

    return 0;
}
