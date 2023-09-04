#include <stdio.h>

int main() {
    int ano, idade;

    do {
        printf("Digite oano de seu nascimento: ");
        scanf("%d", &ano);

        if (ano < 0) {
            printf("Por favor, digite um ano valido.\n");
        }
    } while (ano < 0);

    idade = 2023 - ano;

    printf("Voce possui %d anos.", idade);

    return 0;
    }
