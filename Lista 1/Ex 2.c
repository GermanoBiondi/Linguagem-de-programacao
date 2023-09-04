#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Por favor, digite um numero inteiro positivo.\n");
        }
    } while (numero < 0);

    if (numero % 2 == 0){
        printf("O numero informado e par.");
        }else{
            printf("O numero informado e impar.");
        }
    return 0;
}
