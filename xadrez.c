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



    printf("\nCavalo:\n");
    int cavalo, movimentos;
    int direcao1, direcao2;


    printf("Primeira opcao de movimentacao: \n");
    printf("1 - Cima\n2 - Baixo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &direcao1);

    if(direcao1 != 1 && direcao1 != 2){
        printf("\n\nOpcao invalida\n\n");
    } else {
        printf("\nSegunda opcao de movimentacao: \n");
        printf("3 - Direita\n4 - Esquerda\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &direcao2);
    
        if(direcao2 != 3 && direcao2 != 4){
            printf("\n\nOpcao Invalida\n\n");
        } else{
            for(cavalo = 0; cavalo < 1; cavalo++){
                for(movimentos = 0; movimentos < 2; movimentos++){
        
                    if(direcao1 == 1){  
                        printf("Cima\n");
                    } else if(direcao1 == 2){ 
                        printf("Baixo\n");
                    }
                }
        
                if(direcao2 == 3){
                    printf("Direita\n");
                } else if(direcao2 == 4){
                    printf("Esquerda");
                }
            }
        }
    
       
    }
   
    return 0;
}
