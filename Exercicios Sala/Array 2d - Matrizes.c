#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna, soma, produto, menor, maior, num_pares, num_impares;
    float media;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    soma = 0; // Inicialize a variavel soma com zero
    produto = 1; // Inicialize a variavel produto com 1
    menor = matriz[0][0];
    maior = matriz[0][0];
    num_pares = 0;
    num_impares = 0;

    for (linha = 0; linha < 3; linha++) {
        printf("------------\n");
        for (coluna = 0; coluna < 3; coluna++) {
            printf(" %d ", matriz[linha][coluna]);
            printf("|");
            soma += matriz[linha][coluna]; // Adicione o valor a soma
            produto *= matriz[linha][coluna]; // Multiplique o valor ao produto

            if (matriz[linha][coluna] < menor)
                menor = matriz[linha][coluna]; // Atualize o valor minimo

            if (matriz[linha][coluna] > maior)
                maior = matriz[linha][coluna]; // Atualize o valor maximo

            if (matriz[linha][coluna] % 2 == 0)
                num_pares++; // Conte numeros pares

            else
                num_impares++; // Conte numeros impares
        }
        printf("\n");
    }

    printf("------------\n");

    media = (float)soma / 9; // Calcule a media

    printf("\nA soma dos elementos da matriz e: %d\n", soma);
    printf("O produto dos elementos da matriz e: %d\n", produto);
    printf("O menor valor na matriz e: %d\n", menor);
    printf("O maior valor na matriz e: %d\n", maior);
    printf("A media dos elementos da matriz e: %.2f\n", media);
    printf("Numeros pares na matriz: %d\n", num_pares);
    printf("Numeros impares na matriz: %d\n", num_impares);

    return 0;
}
