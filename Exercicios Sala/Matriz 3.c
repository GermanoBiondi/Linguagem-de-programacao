#include <stdio.h>

int main() {
    int n, m;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);

    // Declaração da matriz com tamanho n x m
    int matriz[n][m];

    // Preenchimento da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos da matriz
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
    }

    // Cálculo do maior elemento da matriz
    int maior = matriz[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Cálculo do produto dos elementos da diagonal principal
    int produto_diagonal = 1;
    for (int i = 0; i < n && i < m; i++) {
        produto_diagonal *= matriz[i][i];
    }

    // Cálculo da soma dos elementos de cada coluna
    int soma_colunas[m];
    for (int j = 0; j < m; j++) {
        soma_colunas[j] = 0;
        for (int i = 0; i < n; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Exibição dos resultados
    printf("Soma dos elementos da matriz: %d\n", soma);
    printf("Maior elemento da matriz: %d\n", maior);
    printf("Produto dos elementos da diagonal principal: %d\n", produto_diagonal);
    printf("Soma dos elementos de cada coluna:\n");
    for (int j = 0; j < m; j++) {
        printf("Coluna %d: %d\n", j + 1, soma_colunas[j]);
    }

    return 0;
}

