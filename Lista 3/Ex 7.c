#include <stdio.h>

// Função para calcular a área de um quadro
float calcularArea(float altura, float largura) {
    return altura * largura;
}

// Função para calcular o perímetro de um quadro
float calcularPerimetro(float altura, float largura) {
    return 2 * altura + 2 * largura;
}

int main() {
    float altura, largura;
    char resposta;

    do {
        printf("Digite a altura do quadro: ");
        scanf("%f", &altura);

        printf("Digite a largura do quadro: ");
        scanf("%f", &largura);

        float area = calcularArea(altura, largura);
        float perimetro = calcularPerimetro(altura, largura);

        printf("Área do quadro: %.2f\n", area);
        printf("Perímetro do quadro: %.2f\n", perimetro);

        printf("Deseja calcular outro quadro? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
