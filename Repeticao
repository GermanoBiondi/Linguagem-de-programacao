21/08/2023
#include <stdio.h>
#include <stdlib.h>

int main(){

    int t, valor, soma, i;

//
// Tabuada
//
    t= 1;

    for (i=0; i<10; i++){
        printf("\n%d: %d * %d = %d", t, t, i,(t*i));
    }


//
// Informar valor valido
//
    soma = 0;
    for (i=0; i<3; i++){
        printf("\nInforme um valor:");
        scanf("%d", &valor);
        if (valor < 0){
            printf("Valor informado esta incorreto");
            }else{
            soma = soma + valor;
            }
    }
    printf("Resumo");
    printf("\nValor da soma: %d", soma);
//
// Soma 3 numeros
//
    soma = 0;
    i = 0;
    while(i<3){
        valor = 0;
        while(valor <= 0){
            printf("\n informe o valor: ", i+1);
            scanf("%d", &valor);
            if(valor<=0){
                printf("Valor informado e negativo, informe um valor positivo.");
            }
        soma = soma + valor;
        i = i + 1;
        }
        printf("\nA soma dos valores: %d", soma);
    }

    return 0;
}
