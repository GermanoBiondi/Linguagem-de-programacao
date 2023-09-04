#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    int media;

    printf("Digite o 1 numero inteiro positivo: ");
    scanf("%d", &numero1);

    printf("Digite o 2 numero inteiro positivo: ");
    scanf("%d", &numero2);

    printf("Digite o 3 numero inteiro positivo: ");
    scanf("%d", &numero3);

    printf("Digite o 4 numero inteiro positivo: ");
    scanf("%d", &numero4);

    media = (numero1 + numero2 + numero3 + numero4)/ 4;

    printf("A media aritmetica dos valroes informados e: %d", media);

    return 0;
}
