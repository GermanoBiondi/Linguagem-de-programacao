#include <stdio.h>

// Fun��o para calcular o novo sal�rio com base no sal�rio atual
float calcularNovoSalario(float salAtual) {
    if (salAtual <= 500) {
        return salAtual * 1.20;
    } else {
        return salAtual * 1.10;
    }
}

int main() {
    float salAtual, novoSal;

    // Solicitar o valor do sal�rio atual ao usu�rio
    printf("Digite o valor do sal�rio atual: ");
    scanf("%f", &salAtual);

    // Chamar a fun��o para calcular o novo sal�rio
    novoSal = calcularNovoSalario(salAtual);

    // Exibir o novo sal�rio
    printf("Novo sal�rio: %.2f\n", novoSal);

    // Mensagem de fim do programa
    printf("Fim do programa.\n");

    return 0;
}
