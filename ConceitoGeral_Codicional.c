# include <stdio.h>

int main(void){

    int idade, senha;

    printf("Sua idade: ");
    scanf("%d", &idade);


    if(idade >= 18){
        printf("Voc� e maior de idade!");}
            else{printf("Voc� e menor de idade!");}
            printf("\n");
            printf("Sua senha: ");
            scanf("%d", &senha);

    if(senha == 123){
    printf("Acesso Liberado.");}
        else{
        printf("Senha incorreta.");}


}
