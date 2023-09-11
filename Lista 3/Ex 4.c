#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // É divisível por algum número diferente de 1 e ele mesmo, não é primo
        }
    }

    return 1; // É primo
}

int main() {
    int num;
    char resposta;

    do {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (ehPrimo(num)) {
            printf("%d é primo.\n", num);
        } else {
            printf("%d não é primo.\n", num);
        }

        printf("Deseja verificar outro número? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
