#include <stdio.h>

int main() {
    int matriz[3][3];

    matriz[0][0] = 2;
    matriz[0][1] = 3;
    matriz[0][2] = 1;

    matriz[1][0] = 1;
    matriz[1][1] = 3;
    matriz[1][2] = 4;

    matriz[2][0] = 4;
    matriz[2][1] = 5;
    matriz[2][2] = 3;

    int r, c;
    int soma = 0;

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            soma = soma + matriz[r][r];
        }
    }

    printf("A soma dos elementos e: %d\n", soma);

    return 0;
}
