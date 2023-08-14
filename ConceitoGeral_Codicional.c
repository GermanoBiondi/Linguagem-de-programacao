# include <stdio.h>

int main(void){

    int idade, senha;

    printf("Sua idade: ");
    scanf("%d", &idade);


    if(idade >= 18){
        printf("\n Você e maior de idade!");}
            else{printf("\n Você e menor de idade!");}
            printf("\n Sua senha: ");
            scanf("%d", &senha);

    if(senha == 123){
    printf("\n Acesso Liberado.");}
        else{
        printf("\n Senha incorreta.");}


}
