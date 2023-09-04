#include <stdio.h>

int main() {
    int hora, minutos;
    char continuar;

    do {
        printf("Digite a hora (0-23): ");
        scanf("%d", &hora);

        printf("Digite os minutos (0-59): ");
        scanf("%d", &minutos);

        int minutosTotais = hora * 60 + minutos;
        int minutosTotaisComConversao = minutosTotais + minutos;
        int segundosTotais = minutosTotaisComConversao * 60;

        printf("\nHora digitada em minutos: %d minutos\n", hora * 60);
        printf("Total de minutos: %d minutos\n", minutosTotaisComConversao);
        printf("Total de minutos convertidos em segundos: %d segundos\n\n", segundosTotais);

        printf("Deseja fazer outro cálculo? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado. Obrigado por usar o calculador de tempo!\n");

    return 0;
}
