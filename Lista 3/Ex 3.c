#include <stdio.h>

// Função para verificar se um número é par
int ehPar(int num) {
    return num % 2 == 0;
}

// Função para encontrar o maior valor
int encontrarMaior(int valores[], int n) {
    int maior = valores[0];
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    return maior;
}

// Função para encontrar o menor valor
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
        printf("Digite o %do número: ", i + 1);
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

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Maior número informado: %d\n", maior);
    printf("Menor número informado: %d\n", menor);

    return 0;
}
