#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    // Imprime o cabeçalho do jogo 


    printf("          P  /_\\  P                             \n");
    printf("         /_\\_|_|_/_\\                           \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                        \n");
    printf("    |_____| ' _ ' |_____|                        \n");
    printf("          \\__|_|__/                             \n");
    printf("\n\n");

    int seg = time(0);
    srand(seg);

    int n1 = rand();

    int secret_num = n1 % 100;
    int chute;

    int acertou = 0;

    double pontos = 1000;
    int divisor = 2;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1)Fácil (2)Médio (3)Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int nTentativas;
    switch(nivel){
        case 1:
        nTentativas = 20;
        break;

        case 2:
        nTentativas = 15;
        break;

        case 3:
        nTentativas = 10;
        break;

        default:
        printf("Insira uma opção valida...");
        break;
    }

    for (int i = 0; i <= nTentativas; i++){

        printf("O numero secreto é: %d\n\n", secret_num);
        printf("Tentaiva: %d de %d\n", i, nTentativas);

        printf("Qual é seu chute?");
        scanf("%d", &chute);

        printf("seu chute foi: %d \n", chute);

        if(chute < 0){
            printf("Você não pode chutar numeros negativos\n");
            continue;
        }

        acertou = (chute == secret_num);
        int maior = chute > secret_num;

        if(acertou){
            break;
        }
        else if(maior){
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi maior que o numero secreto!!");
        }
        else{
            printf("Você errou!! tente novamente\n");
            printf("Seu chute foi menor que o numero secreto!!");
        }
        double pontosPerdidos = abs((chute - secret_num) / (double)divisor);
        pontos = pontos - pontosPerdidos;
        
        printf("Você perdeu %.1f pontos...\n", pontosPerdidos);
    }

    printf("Fim de jogo!\n\n\n");

    if(acertou){
        printf("Você Venceu!! Parabens...\n");
        printf("Você finalizou o jogo com: %.1f pontos\n", pontos);
    }else{
        printf("Você Perdeu!! Tente novamente...\n");
    }
}

