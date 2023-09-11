#include <stdio.h>

// Função para converter horas e minutos em minutos
int converterParaMinutos(int horas, int minutos) {
    return horas * 60 + minutos;
}

// Função para converter minutos em segundos
int converterParaSegundos(int minutos) {
    return minutos * 60;
}

int main() {
    char resposta;

    do {
        int horas, minutos, minutosTotais, segundos;

        printf("Digite a hora: ");
        scanf("%d", &horas);

        printf("Digite os minutos: ");
        scanf("%d", &minutos);

        minutosTotais = converterParaMinutos(horas, minutos);
        segundos = converterParaSegundos(minutosTotais);

        printf("Hora digitada convertida em minutos: %d\n", minutosTotais);
        printf("Total de minutos: %d\n", minutosTotais);
        printf("Total de minutos convertidos em segundos: %d\n", segundos);

        printf("Deseja fazer outra conversão? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
