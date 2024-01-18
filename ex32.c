#include <stdio.h>

int main() {
    int numero, primo = 1;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d è un numero primo.\n", numero);
    } else {
        printf("%d non è un numero primo.\n", numero);
    }

    return 0;
}

