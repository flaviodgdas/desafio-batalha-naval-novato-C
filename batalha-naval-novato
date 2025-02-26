#include <stdio.h>
void meuNavio1(int tabuleiro[10][10], int x, int y, int tamanho){
    for (int i = 0; i < tamanho; i++){
        tabuleiro[x][y + i] = 1;
    }
}
void meuNavio2(int tabuleiro[10][10], int x, int y, int tamanho){
    for (int i = 0; i < tamanho; i++){
        tabuleiro[x + i][y] = 2;
    }
}
void meuTabuleiro(int tabuleiro[10][10]){
    printf("\n");
    printf("*** BATALHA NAVAL ***\n");
    printf("       Novato\n");
    printf("'0' representa agua\n");
    printf("'1' representa Navio1\n");
    printf("'2' representa Navio2\n");
    printf("\n");
    printf("  A B C D E F G H I J \n");
    for (int i = 0; i < 10; i++){
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");   
    }   
}
int main(){
    int tabuleiro[10][10] = {0};
    meuNavio1(tabuleiro, 2, 3, 3);
    meuNavio2(tabuleiro, 5, 6, 3);
    meuTabuleiro(tabuleiro);
    printf("\n");
    printf("*** Volte sempre! ***\n");
    printf("\n");  
    return 0;
}
