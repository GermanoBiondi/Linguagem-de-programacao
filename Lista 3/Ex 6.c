#include <stdio.h>

// Função para calcular o novo salário com base no salário atual
float calcularNovoSalario(float salAtual) {
    if (salAtual <= 500) {
        return salAtual * 1.20;
    } else {
        return salAtual * 1.10;
    }
}

int main() {
    float salAtual, novoSal;

    // Solicitar o valor do salário atual ao usuário
    printf("Digite o valor do salário atual: ");
    scanf("%f", &salAtual);

    // Chamar a função para calcular o novo salário
    novoSal = calcularNovoSalario(salAtual);

    // Exibir o novo salário
    printf("Novo salário: %.2f\n", novoSal);

    // Mensagem de fim do programa
    printf("Fim do programa.\n");

    return 0;
}
