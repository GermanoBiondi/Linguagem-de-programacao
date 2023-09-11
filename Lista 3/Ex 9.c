#include <stdio.h>

// Fun��o para calcular o sal�rio bruto
float calcularSalarioBruto(float horasTrabalhadas, float valorHora) {
    return horasTrabalhadas * valorHora;
}

// Fun��o para calcular o imposto
float calcularImposto(float salarioBruto) {
    return 0.03 * salarioBruto;
}

// Fun��o para calcular o sal�rio l�quido
float calcularSalarioLiquido(float salarioBruto, float imposto) {
    return salarioBruto - imposto;
}

int main() {
    char resposta;

    do {
        float horasTrabalhadas, valorHora, salarioBruto, imposto, salarioLiquido;

        printf("Digite o n�mero de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Digite o valor da hora trabalhada: ");
        scanf("%f", &valorHora);

        salarioBruto = calcularSalarioBruto(horasTrabalhadas, valorHora);
        imposto = calcularImposto(salarioBruto);
        salarioLiquido = calcularSalarioLiquido(salarioBruto, imposto);

        printf("Sal�rio Bruto: %.2f\n", salarioBruto);
        printf("Imposto: %.2f\n", imposto);
        printf("Sal�rio L�quido: %.2f\n", salarioLiquido);

        printf("Deseja calcular outro sal�rio? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
