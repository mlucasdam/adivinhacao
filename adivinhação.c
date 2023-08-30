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
        int maior = chute > secret_num;
        int menor  = chute < secret_num;

        if(chute < 0){
            printf("Você não pode chutar numeros negativos\n");
            i--;

            continue;
        }
        else if(acertou){
            printf("Você acertou!!\n");
            break;
        }
        else if(maior){
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi maior que o numero secreto!!\n");
        }
        else{
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi menor que o numero secreto!!\n");
        }

    }

    printf("Fim de jogo!\n");    
}

