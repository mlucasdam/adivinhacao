#include <stdio.h>

int main(){
    
    // Imprime o cabeçalho do jogo 
    printf("*********************************\n");
    printf("*Bem-vindo ao jogo de advinhação*\n");
    printf("*********************************\n");

    int secret_num = 42;
    int chute;

    int ganhou = 0;
    int tentativas = 1;

    int pontos = 1000;

    while (1){

        printf("Tentaiva: %d\n", tentativas);
        printf("Qual é seu chute?");

        scanf("%d", &chute);
        printf("seu chute foi: %d \n", chute);

        int acertou = chute == secret_num;
        int maior = chute > secret_num;

        int pontosPerdidos = (chute - secret_num) / 2;

        if(chute < 0){
            printf("Você não pode chutar numeros negativos\n");
            continue;
        }
        else if(acertou){
            printf("Você Venceu!!\n");
            printf("Você acertou em: %d tentativas\n", tentativas);
            break;
        }
        else if(maior){
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi maior que o numero secreto!!Você perdeu %d pontos...\n", pontosPerdidos);
        }
        else{
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi menor que o numero secreto!!Você perdeu %d pontos...\n", pontosPerdidos);
        }

        tentativas++;
        
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de jogo!\n");
    printf("Você finalizou o jogo em: %d pontos\n", pontos);
}

