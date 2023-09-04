#include <stdio.h>

int main() {
    int idade;

    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Por favor, digite uma idade valida.\n");
        }
    } while (idade < 0);

    if (idade >= 18){printf("Voce e maior de idade.");
    }
    if (idade < 18){printf("voce e menor de idade.");}

    return 0;
    }
