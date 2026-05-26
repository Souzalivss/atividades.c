#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;
    

    printf("Menu principal:\n");
    printf("1. Iniciar o jogo\n");
    printf("2. ver regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
    srand(time(0)); //gerador de numeros aleatorios, inicia em 0
    numeroSecreto = rand() % 10; //de 0 até 9
    printf("Digite um numero de 0 a 9: \n");
    scanf("%d", &palpite);

    if (numeroSecreto == palpite)
    {
     printf("Voce acertou!\n");
     printf("Numero secreto é: %d\n", numeroSecreto);
    } else {
        printf("voce errou!\n");
        printf("Numero secreto: %d\n", numeroSecreto);
    }
    break;

    case 2:
    printf("A explicação das regras\n");
    printf("digite a opçao relacionada as regras do jogo!\n");
     scanf("%d", &regras);
    switch (regras)
     {
     case 1:
        printf("regra 1");
        break;
     case 2:
        printf("regra 2!");
        break;
     default:

        break;
     }
    break;

    case 3:
    printf("Saindo do jogo\n");
    break;

    default:
    ("opção inválida\n");


    }
}
