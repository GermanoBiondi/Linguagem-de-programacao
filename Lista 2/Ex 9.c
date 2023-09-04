#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salarioMinimo;
    char continuar;

    do {
        printf("Informe o valor da hora trabalhada: ");
        scanf("%f", &valorHora);

        printf("Informe o n�mero de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Informe o valor do sal�rio m�nimo: ");
        scanf("%f", &salarioMinimo);

        float salarioBruto = valorHora * horasTrabalhadas;
        float imposto = salarioBruto * 0.03;
        float salarioReceber = salarioBruto - imposto;

        printf("\nSal�rio bruto: R$%.2f\n", salarioBruto);
        printf("Imposto: R$%.2f\n", imposto);
        printf("Sal�rio a receber: R$%.2f\n\n", salarioReceber);

        printf("Deseja calcular outro sal�rio? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado. Obrigado por usar o calculador de sal�rios!\n");

    return 0;
}
