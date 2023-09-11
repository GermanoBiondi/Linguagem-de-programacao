#include <stdio.h>

// Função para calcular o lucro do distribuidor
float calcularLucroDistribuidor(float precoFabrica, float percentLucro) {
    return precoFabrica * percentLucro;
}

// Função para calcular o valor dos impostos
float calcularImpostos(float precoFabrica, float percentImpostos) {
    return precoFabrica * percentImpostos;
}

int main() {
    for (int i = 0; i < 2; i++) {
        float precoFabrica, percentLucro, percentImpostos;

        printf("Digite o preço de fábrica do veículo: ");
        scanf("%f", &precoFabrica);

        printf("Digite o percentual de lucro do distribuidor (em decimal): ");
        scanf("%f", &percentLucro);

        printf("Digite o percentual de impostos (em decimal): ");
        scanf("%f", &percentImpostos);

        float lucroDistribuidor = calcularLucroDistribuidor(precoFabrica, percentLucro);
        float valorImpostos = calcularImpostos(precoFabrica, percentImpostos);
        float precoFinal = precoFabrica + lucroDistribuidor + valorImpostos;

        printf("Valor correspondente ao lucro do distribuidor: %.2f\n", lucroDistribuidor);
        printf("Valor correspondente aos impostos: %.2f\n", valorImpostos);
        printf("Preço final do veículo: %.2f\n", precoFinal);
    }

    return 0;
}
