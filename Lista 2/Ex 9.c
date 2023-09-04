#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salarioMinimo;
    char continuar;

    do {
        printf("Informe o valor da hora trabalhada: ");
        scanf("%f", &valorHora);

        printf("Informe o número de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Informe o valor do salário mínimo: ");
        scanf("%f", &salarioMinimo);

        float salarioBruto = valorHora * horasTrabalhadas;
        float imposto = salarioBruto * 0.03;
        float salarioReceber = salarioBruto - imposto;

        printf("\nSalário bruto: R$%.2f\n", salarioBruto);
        printf("Imposto: R$%.2f\n", imposto);
        printf("Salário a receber: R$%.2f\n\n", salarioReceber);

        printf("Deseja calcular outro salário? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado. Obrigado por usar o calculador de salários!\n");

    return 0;
}
