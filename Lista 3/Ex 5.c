#include <stdio.h>

// Função para exibir o menu e obter a opção do usuário
int exibirMenu() {
    int opcao;
    printf("MENU PRINCIPAL\n");
    printf("1. Funcionários\n");
    printf("2. Departamentos\n");
    printf("3. Funções\n");
    printf("4. [Finalizar/Sair]\n");
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    int opcao;

    do {
        opcao = exibirMenu();

        switch (opcao) {
            case 1:
                printf("Opção Funcionários selecionada.\n");
                break;
            case 2:
                printf("Opção Departamentos selecionada.\n");
                break;
            case 3:
                printf("Opção Funções selecionada.\n");
                break;
            case 4:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 4);

    return 0;
}
