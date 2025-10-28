#include <stdio.h>

void moveTorre(int i){

    if(i > 0){
        printf("Direita\n");
        moveTorre(i - 1);
    }
}

void moveBispo(int loop){
    if(loop > 0){
        for(int i = 1; i > 0; i--){
            for(int j = 1; j > 0; j--){
                printf("Direita, ");
            }
            printf("Cima\n");
        }
        moveBispo(loop - 1);
    }
}

void moveRainha(int i){
    if(i > 0){
        printf("Esquerda\n");
        moveRainha(i - 1);
    }
}


int main() {

    printf("###Desafio Xadrez###\n\n");

    //Criando a movimentação da torre com recursividade
    printf("\nMovimento da Torre:\n");
    int i = 5;
    moveTorre(i);

    //Criando a movimentação do bispo com loops e recursividade
    printf("\nMovimento do Bispo:\n");
    int loops = 5;
    moveBispo(loops);

    //Criando a movimentação da rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    int j = 8;
    moveRainha(j);

    //Criando a movimentação do cavalo com loop aninhando
    printf("\nMovimento do Cavalo:\n");
    int k, l;
    for(k = 1; k > 0; k--){
        for(l = 2; l > 0; l--){
            printf("Cima\n");
        }
        printf("Direita\n");
    }


    return 0;
}
