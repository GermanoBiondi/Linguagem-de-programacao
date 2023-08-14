# include <stdio.h>

int main(void){

    int idade, senha;

    printf("Sua idade: ");
    scanf("%d", &idade);


    if(idade >= 18){
        printf("Você e maior de idade!");}
            else{printf("Você e menor de idade!");}
            printf("\n");
            printf("Sua senha: ");
            scanf("%d", &senha);

    if(senha == 123){
    printf("Acesso Liberado.");}
        else{
        printf("Senha incorreta.");}


}
