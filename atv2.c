#include <stdio.h>

//uso do switch

int main() {
    int variavel;

    printf("Digite a sua variável: \n");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Seu valor digitado foi 1.\n");
        break;
    case 2:
         printf("Seu valor digitado foi 2.\n");
         break;
    default:
        printf("Seu valor digitado não foi 1 nem 2;\n");
        break;
    }

}