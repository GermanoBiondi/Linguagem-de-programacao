#include <stdio.h>

int calcularTotal(int numeros[], int tamanho) {
    int total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += numeros[i];
    }
    return total;
}

float calcularMedia(int total, int tamanho) {
    return (float)total / tamanho;
}

int encontrarMaior(int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    return maior;
}

int encontrarMenor(int numeros[], int tamanho) {
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

int main() {
    int quantidade;

    printf("Informe a quantidade de numeros: ");
    scanf("%d", &quantidade);

    int numeros[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        while (numeros[i] <= 0) {
            printf("Informe um numero maior que zero: ");
            scanf("%d", &numeros[i]);
        }
    }

    int total = calcularTotal(numeros, quantidade);
    float media = calcularMedia(total, quantidade);
    int maior = encontrarMaior(numeros, quantidade);
    int menor = encontrarMenor(numeros, quantidade);

    printf("\nResumo:\n");
    printf("Total dos valores: %d\n", total);
    printf("Media Simples dos valores: %.2f\n", media);
    printf("Maior valor informado: %d\n", maior);
    printf("Menor valor informado: %d\n", menor);

    return 0;
}
