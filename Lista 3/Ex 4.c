#include <stdio.h>

// Fun��o para verificar se um n�mero � primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // � divis�vel por algum n�mero diferente de 1 e ele mesmo, n�o � primo
        }
    }

    return 1; // � primo
}

int main() {
    int num;
    char resposta;

    do {
        printf("Digite um n�mero inteiro positivo (ou 0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (ehPrimo(num)) {
            printf("%d � primo.\n", num);
        } else {
            printf("%d n�o � primo.\n", num);
        }

        printf("Deseja verificar outro n�mero? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
