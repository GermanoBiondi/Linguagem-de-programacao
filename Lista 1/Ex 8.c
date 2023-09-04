#include <stdio.h>

int main() {
    int num, menor, maior, soma, media;

    do {
    printf("Informe o 1 numero: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (num < 0);
    soma = num;
    menor = num;
    maior = num;

    do {
    printf("Informe o 2 numero: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (num < 0);
    soma = soma + num;
    if(num < menor){
       menor = num;
       }
    if(num > menor){
    maior = num;
    }

    do {
    printf("Informe o 3 numero: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (num < 0);
    soma = soma + num;
    if(num < menor){
       menor = num;
       }
    if(num > menor){
    maior = num;
    }


    do {
    printf("Informe o 4 numero: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (num < 0);
    soma = soma + num;
    if(num < menor){
       menor = num;
       }
    if(num > menor){
    maior = num;
    }


    do {
    printf("Informe o 5 numero: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Valor invalido.\nDeve ser informado um valor inteiro positivo.\n");
    }
    }while (num < 0);
    soma = soma + num;
    if(num < menor){
       menor = num;
       }
    if(num > menor){
    maior = num;
    }

    media = soma / 5;

    printf("O menor numero e: %d\n", menor);
    printf("O maior numero e: %d\n", maior);
    printf("A soma dos numeros e: %d\n", soma);
    printf("A media dos numeros informados e: %d", media);

    return 0;
}

