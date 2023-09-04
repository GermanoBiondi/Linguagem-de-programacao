#include <stdio.h>

int main(){
    int opcao;

    do{
        printf("Menu principal\n");
        printf("1 - Funcionarios\n");
        printf("2 - Departamentos\n");
        printf("3 - Funcoes\n");
        printf("4 - Finalizar ou sair\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                system("cls");
                printf("Opcao selecionada: Funcionarios\n");
                break;
             case 2:
                system("cls");
                printf("Opcao selecionada: Departamentos\n");
                break;
             case 3:
                system("cls");
                printf("Opcao selecionada: Funcoes\n");
                break;
             case 4:
                system("cls");
                printf("Opcao selecionada: Finalizar\n");
                break;
             default:
                system("cls");
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 4);

    printf("programa encerrado,\n");

    return 0;
}
