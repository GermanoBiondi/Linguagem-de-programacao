#include <stdio.h>

// Fun��o para exibir o menu e obter a op��o do usu�rio
int exibirMenu() {
    int opcao;
    printf("MENU PRINCIPAL\n");
    printf("1. Funcion�rios\n");
    printf("2. Departamentos\n");
    printf("3. Fun��es\n");
    printf("4. [Finalizar/Sair]\n");
    printf("Escolha uma op��o (1-4): ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    int opcao;

    do {
        opcao = exibirMenu();

        switch (opcao) {
            case 1:
                printf("Op��o Funcion�rios selecionada.\n");
                break;
            case 2:
                printf("Op��o Departamentos selecionada.\n");
                break;
            case 3:
                printf("Op��o Fun��es selecionada.\n");
                break;
            case 4:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Op��o inv�lida.\n");
        }

    } while (opcao != 4);

    return 0;
}
