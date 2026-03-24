#include <stdio.h>

int main(){
    int torre = 1, rainha = 8, bispo = 0; // Criacao dos movimentos das peças, sendo usado o nome delas como contador;

    for(int i = 0; i < rainha; i++ ){ // movimentando a rainha 8 casas a esquerda (o a 7)
        printf("Rainha movendo-se à ESQUERDA\n");
    }

    printf("\n"); // Pulando linha entre o movimento das peças.
    do{
        printf("Torre movendo-se à DIREITA\n");
        torre++;
    }while(torre <=5); //Movimentado a torre 5 casas à direita (1 a 5).

    printf("\n"); // Pulando linha entre o movimento das peças.

    while(bispo < 5){
        printf("Bispo movendo-se para CIMA\n");
        printf("Bispo movendo-se para DIREITA\n"); // Movimento do bispo precisa de multiplos printf por ser na diagonal.
        bispo++;
    }

    return 0;
}
