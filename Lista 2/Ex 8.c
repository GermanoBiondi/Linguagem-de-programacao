# include <stdio.h>

int main() {
    for(int i = 0; i < 2; i++) {
        float precoFabrica, percentualLucro, percentualImpostos;

        printf("Informe o preco de fabrica do veiculo: ");
        scanf("%f", &precoFabrica);

        printf("Informe o percentual de lucro do distribuidor: ");
        scanf("%f", &percentualLucro);

        printf("Informe o percentual de impostos: ");
        scanf("%f", &percentualImpostos);

        float lucroDistribuidor = precoFabrica * (percentualLucro / 100);
        float impostos = precoFabrica * (percentualImpostos / 100);
        float precoFinal = precoFabrica + lucroDistribuidor + impostos;

        printf("\nValor correspondente ao lucro do distribuidor: R$%.2f\n", lucroDistribuidor);
        printf("Valor correspondente aos impostos: R$%.2f\n");
        printf("Preco final do veiculo: R$%.2f\n\n", precoFinal);
    }

    printf("Programa encerrado.\n");

    return 0;
}
