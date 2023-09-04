# include <stdio.h>

int main(){
    float salAtual, novoSal;

    printf("Valor do salrio atual: ");
    scanf("%f", &salAtual);

    if (salAtual <= 500){
        novoSal = salAtual * 1.20;
        printf("Novo salario: %.2f", novoSal);
    }else {
        novoSal = salAtual * 1.10;
        printf("Novo salario: %.2f", novoSal);
    }

    printf("\nFim do pragrama.");

    return 0;
}
