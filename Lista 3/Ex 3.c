#include <stdio.h>

// Fun��o para verificar se um n�mero � par
int ehPar(int num) {
    return num % 2 == 0;
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
    int numeros[10];
    int pares = 0;
    int impares = 0;
    int maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 0) {
            maior = menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }

        if (ehPar(numeros[i])) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);
    printf("Maior n�mero informado: %d\n", maior);
    printf("Menor n�mero informado: %d\n", menor);

    return 0;
}
