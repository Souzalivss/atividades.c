#include <stdio.h>

int main() {
    int opcao;
    float saldo = 2000.00;

    printf("Escolha uma opção: \n");
    printf("1. Consultar saldo.\n");
    printf("2. Fazer depósito.\n");
    printf("3. Fazer saque.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu saldo é de: R$%.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você quer fazer o depósito\n");
        break;
    case 3:
        printf("Digite o valor a sacar");      
        break;
    default:
        printf("Opção inválida!");
        break;
    }
}