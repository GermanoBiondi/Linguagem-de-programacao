#include <stdio.h>

// Fun��o para calcular a �rea de um quadro
float calcularArea(float altura, float largura) {
    return altura * largura;
}

// Fun��o para calcular o per�metro de um quadro
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

        printf("�rea do quadro: %.2f\n", area);
        printf("Per�metro do quadro: %.2f\n", perimetro);

        printf("Deseja calcular outro quadro? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
