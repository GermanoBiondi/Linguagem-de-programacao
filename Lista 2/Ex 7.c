# include <stdio.h>

int main(){
    float altura, largura;
    char continuar;

    do {
        printf("Informe a altura do retangulo: ");
        scanf("%f", &altura);

        printf("Informe a largura do retangulo: ");
        scanf("%f", &largura);

        float area = altura * largura;
        float perimetro = 2 * altura + 2 * largura;

        printf("\nArea do retangulo: %.2f\n", area);
        printf("Perimetro do retangulo: %.2f\n", perimetro);

        printf("Deseja calcular para outro retangulo?(s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("programa encerrado.");

    return 0;
}
