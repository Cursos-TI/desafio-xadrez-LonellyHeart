#include <stdio.h>

void torre(int casas){ // Função torre para movimentação da torre, com o numero de casas que ira ser movidas.
    if (casas > 0){
        printf("Torre movende-se à DIREITA\n");
        torre(casas - 1); // Inicio da função recursiva, chamando ela mesmo e diminuindo o valor
    }
}

void rainha(int casas){// Função rainha para movimentação da rainha, com o numero de casas que ira ser movidas
    if (casas > 0){
        printf("Rainha movendo-se a ESQUERDA\n");
        rainha(casas - 1); // Inicio da função recursiva, chamando ela mesmo e diminuindo o valor
    }
}

void bispo(int casas){// Função bispo para movimentação da bispo, com o numero de casas que ira ser movidas
    if (casas > 0){
        printf("Bispo movendo-se para DIREITA\n");
        printf("Bispo movendo-se para CIMA\n");
        bispo(casas - 1); // Inicio da função recursiva, chamando ela mesmo e diminuindo o valor
        
    }
}

int main(){
    rainha(8);
    printf("\n");// Pulando linha entre as peças
    torre(5);
    printf("\n");// Pulando linha entre as peças
    bispo(5);
    printf("\n");// Pulando linha entre as peças

    
    for(int cavaloHorizontal = 2, cavaloVertical = 2; cavaloVertical > 0 && cavaloHorizontal > 0 ; cavaloHorizontal--, cavaloVertical--){ // Cavalo usando looping complexos.
        printf("Cavalo movendo-se para FRENTE\n"); // O cavalo ira se movimentar duas vezes para frente, e então o numero de cavaloVertical sera baixo o suficiente para ele entrar no IF
        if(cavaloVertical == 1){
            printf("Cavalo movendo-se para DIREITA\n"); // Entrando no IF sera a ultima intereção com looping que sera o movimento do cavalo de ir completar o movimento em L
        }
    }

    return 0;
}
