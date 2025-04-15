#include <stdio.h>

int main() {

    printf("\nBispo:\n");

    for (int bispo = 0; bispo < 5; bispo++) {
        printf("Bispo movimentando-se para Cima/Direita (%d)\n", bispo + 1);
    }

    printf("\nRainha:\n");

    int rainha = 0;

    while (rainha < 8){
        printf("Rainha movimentando-se Para a Esquerda (%d)\n", rainha + 1);
        rainha++;
    }

    printf("\nTorre:\n");

    int torre = 0;
    
    do{
        printf("Torre Movimentando-se Para a Direita (%d)\n", torre + 1);
        torre++;
    }while(torre < 5);

    return 0;
    
}
