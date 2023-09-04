#include <stdio.h>

int main() {
    int numero, resposta;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("Insira 1 caso queira imprimir outra tabuda.\nOu qualquer outro numero para sair.\nOpcao: ");
        scanf("%d", &resposta);
        system("cls");
    } while (resposta == 1);

    return 0;
}
