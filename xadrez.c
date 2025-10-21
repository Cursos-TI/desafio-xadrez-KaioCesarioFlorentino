#include <stdio.h>

int main() {
    
    //Declarando as variáveis que vão formar os loops
    int i = 1;
    int o = 1;
    int p = 1;

    printf("###Desafio Xadrez###\n\n");

    //Criando a movimentação da torre com loop
    printf("\nMovimento da Torre:\n");

    while(i <= 5){
    printf("Direita\n");
    i++;
    }

    //Criando a movimentação do bispo com loop
    printf("\nMovimento do Bispo:\n");

    do{
        printf("Cima, Direita\n");
        o++;
    } while(o <=5);

    //Criando a movimentação da rainha com loop
    printf("\nMovimento da Rainha:\n");

    for(p = 1; p <= 8; p++){
        printf("Esquerda\n");
    }

    return 0;
}
