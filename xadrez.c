#include <stdio.h>

int main(){
    int torre = 1, rainha = 8, bispo = 0, cavalo; // Criacao dos movimentos das peças, sendo usado o nome delas como contador;

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

    printf("\n"); // Pulando linha entre o movimento das peças.

    for(cavalo = 1; cavalo < 2; cavalo++){ // Criando o primeiro looping que ira movimentar o cavalo para esquerda, apos a finalização do segundo looping
        int contMovimento = 0;
        do{
            printf("Cavalo movendo-se para BAIXO\n");
            contMovimento++;
        }while(contMovimento < 2); // Segundo looping (do-while) movimenta o cavalo duas vezes para baixo.

        printf("Cavalo movendo-se para ESQUERDA\n"); // E quando o do-while finalizar, o cavalo se movimentara para esquerda, e ira finalizar o looping
    }

    return 0;
}
