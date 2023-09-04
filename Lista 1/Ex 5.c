#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    int soma = 0;

    printf("Digite o 1 numero inteiro positivo: ");
    scanf("%d", &numero1);
        soma += numero1;

    printf("Digite o 2 numero inteiro positivo: ");
    scanf("%d", &numero2);
        soma += numero2;

    printf("Digite o 3 numero inteiro positivo: ");
    scanf("%d", &numero3);
        soma += numero3;

    printf("Digite o 4 numero inteiro positivo: ");
    scanf("%d", &numero4);
       soma += numero4;

    printf("Digite o 5 numero inteiro positivo: ");
    scanf("%d", &numero5);
        soma += numero5;

    printf("A soma dos numeros informados e: %d\n", soma);

    return 0;
}
