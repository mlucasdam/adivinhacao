#include <stdio.h>

#define VIDAS 3

int main(){
    
    // Imprime o cabeçalho do jogo 
    printf("*********************************\n");
    printf("*Bem-vindo ao jogo de advinhação*\n");
    printf("*********************************\n");

    int secret_num = 42;
    int chute;

    for(int i = 1; i <= VIDAS; i++){
        printf("Tentaiva: %d de %d\n", i, VIDAS);
        printf("Qual é seu chute?");

        scanf("%d", &chute);
        printf("seu chute foi: %d \n", chute);

        int acertou = chute == secret_num;

        if (acertou){
            printf("Você acertou!!\n");
            break;
        }
        else{
            int maior = (chute > secret_num);
            if(maior){
                printf("Você errou!!Tente novamente\n");
                printf("Seu chute foi maior que o numero secreto.\n");
            }else{
                printf("Você errou!!Tente novamente\n");
                printf("Seu chute foi menor que o numero secreto.\n");
            }
        }
    }

    printf("Fim de jogo!\n");    
}

