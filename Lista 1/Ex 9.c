#include <stdio.h>

int main(){
    int n1, n2, divisao;

    do {
    printf("Informe um numero: ");
    scanf("%d", &n1);
    if (n1 < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (n1 < 0);

    do {
    printf("Informe um segundo numero: ");
    scanf("%d", &n2);
    if (n2 < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (n2 < 0);

    divisao = n1 / n2;

    if (divisao == 0){
        divisao = n2 / n1;
    }

    printf("A divisao dos dois numeros e: %d", divisao);

    return 0;
}
