#include <stdio.h>

int ePar(int num){
    return num %2 == 0;
}

int main(){
    int num[10], par = 0, impar = 0, maior, menor;

    for(int i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
        if (i == 0){
            maior = num[i];
            menor = num[i];
        } else {
            if (num[i] > maior){
                    maior = num[i];
            }
            if (num[i] < menor){
                    menor = num[i];
            }
        }

        if (ePar(num[i])){
            par++;
        } else {
            impar++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);
    printf("Maior numero informado: %d\n", maior);
    printf("Menor numero informado: %d\n", menor);

    return 0;
}
