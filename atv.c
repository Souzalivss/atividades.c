#include <stdio.h>

int main () {
    int idade, dependentes;
    float renda;

    printf("digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes\n");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade <= 65){
        if( renda < 3000) {
            if(dependentes > 2) {
                printf("Voce está qualificado para os benefícios");
            } else {
        printf("voce nao está qualificado devido ao numero de dependentes");
    }
        } else {
            printf("voce nao esta qualificado devido à renda");
        }
    } else {
        printf("voce nao está qualificado devido à idade");
    }


    
}

