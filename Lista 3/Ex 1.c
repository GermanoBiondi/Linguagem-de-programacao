#include <stdio.h>

// Fun��o para imprimir a tabuada de um n�mero
void imprimirTabuada(int num) {
    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;
    char resposta;

    do {
        printf("Digite um n�mero para a tabuada: ");
        scanf("%d", &num);

        imprimirTabuada(num);

        printf("Deseja imprimir outra tabuada? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
