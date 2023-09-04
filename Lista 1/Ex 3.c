#include <stdio.h>

int main() {
    int numero, dobro;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Por favor, digite um numero inteiro positivo.\n");
        }
    } while (numero < 0);

    dobro = numero * 2;

    printf("O dobro do numero informado e: %d", dobro);

    return 0;
    }
