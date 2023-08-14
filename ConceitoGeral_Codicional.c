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

int main(void){

    int n1, n2, n3;
    printf("Escreva 1 numero: \n");
    scanf("%d", &n1);
    printf("Escreva 2 numero: \n");
    scanf("%d", &n2);
    printf("Escreva 3 numero: \n");
    scanf("%d", &n3);

    if(n1 >=n2 && n2 >= n3){
        printf("O 1º numero e o maior: %d\n", n1);}

        else if (n2 >= n1 && n2 >= n3){
            printf("O 2º numero e maior: %d\n", n2);}

            else if(n3 >= n1 && n3 >= n2){
                printf("O 3º numero e maior: %d\n", n3);}

}
