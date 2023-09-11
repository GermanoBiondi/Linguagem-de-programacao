#include <stdio.h>

// Função para calcular o salário bruto
float calcularSalarioBruto(float horasTrabalhadas, float valorHora) {
    return horasTrabalhadas * valorHora;
}

// Função para calcular o imposto
float calcularImposto(float salarioBruto) {
    return 0.03 * salarioBruto;
}

// Função para calcular o salário líquido
float calcularSalarioLiquido(float salarioBruto, float imposto) {
    return salarioBruto - imposto;
}

int main() {
    char resposta;

    do {
        float horasTrabalhadas, valorHora, salarioBruto, imposto, salarioLiquido;

        printf("Digite o número de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Digite o valor da hora trabalhada: ");
        scanf("%f", &valorHora);

        salarioBruto = calcularSalarioBruto(horasTrabalhadas, valorHora);
        imposto = calcularImposto(salarioBruto);
        salarioLiquido = calcularSalarioLiquido(salarioBruto, imposto);

        printf("Salário Bruto: %.2f\n", salarioBruto);
        printf("Imposto: %.2f\n", imposto);
        printf("Salário Líquido: %.2f\n", salarioLiquido);

        printf("Deseja calcular outro salário? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
