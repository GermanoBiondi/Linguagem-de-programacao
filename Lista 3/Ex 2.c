#include <stdio.h>

// Fun��o para calcular o total dos valores
int calcularTotal(int valores[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += valores[i];
    }
    return total;
}

// Fun��o para calcular a m�dia dos valores
float calcularMedia(int total, int n) {
    return (float)total / n;
}

// Fun��o para encontrar o maior valor
int encontrarMaior(int valores[], int n) {
    int maior = valores[0];
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    return maior;
}

// Fun��o para encontrar o menor valor
int encontrarMenor(int valores[], int n) {
    int menor = valores[0];
    for (int i = 1; i < n; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    return menor;
}

int main() {
    int n;
    printf("Quantos n�meros voc� deseja informar? ");
    scanf("%d", &n);

    int valores[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o %do n�mero: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int total = calcularTotal(valores, n);
    float media = calcularMedia(total, n);
    int maior = encontrarMaior(valores, n);
    int menor = encontrarMenor(valores, n);

    printf("Total dos valores: %d\n", total);
    printf("M�dia simples dos valores: %.2f\n", media);
    printf("Maior valor informado: %d\n", maior);
    printf("Menor valor informado: %d\n", menor);

    return 0;
}
