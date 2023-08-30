#include <stdio.h>

int main(){
    
    // Imprime o cabeçalho do jogo 
    printf("*********************************\n");
    printf("*Bem-vindo ao jogo de advinhação*\n");
    printf("*********************************\n");

    int secret_num = 42;
    int chute;

    printf("Qual é seu chute? ");
    scanf("%d", &chute);
    printf("seu chute foi: %d \n", chute);


    
}

