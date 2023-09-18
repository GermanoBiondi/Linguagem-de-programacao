#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    // Preencha sua matriz aqui (exemplo com valores aleatórios)
    // Você pode substituir isso com os valores da sua matriz
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j;
        }
    }

    // Calcule a soma da diagonal principal e da diagonal secundária
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // Diagonal principal (quando i é igual a j)
            if (i == j) {
                somaDiagonalPrincipal += matriz[i][j];
            }
            // Diagonal secundária (quando i + j é igual a 9)
            if (i + j == 9) {
                somaDiagonalSecundaria += matriz[i][j];
            }
        }
    }

    // Exiba os resultados
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}
