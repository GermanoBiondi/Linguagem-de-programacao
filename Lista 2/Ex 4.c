#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    while (1) {
        printf("Insira um numero (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        if (primo(num)) {
            printf("%d E um numero primo.\n", num);
        } else {
            printf("%d Nao e um numero primo.\n", num);
        }
    }

    return 0;
}
