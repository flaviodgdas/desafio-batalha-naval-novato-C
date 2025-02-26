#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void iniciaNavio4(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y + i] = 4; // Navio (4)
    }
}

void iniciaNavio3(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x - i][y - i] = 3; // Navio (3)
    }
}
void iniciaNavio2(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 2; // Navio (2)
    }
}
void iniciaNavio1(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; // Navio (1)
    }
}
void mostraTabuleiro(int tabuleiro[LINHAS][LINHAS]) {
    printf("*** BATALHA NAVAL ***\n");
    printf("     Aventureiro\n");
    printf("'0' representa agua\n");
    printf("'1' representa Navio1\n");
    printf("'2' representa Navio2\n");
    printf("'3' representa Navio3\n");
    printf("'4' representa Navio4\n");
    printf("\n");
    printf("  A B C D E F G H I J\n"); // Imprime letras das colunas
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i + 1); // Imprime números das linhas
        for (int j = 0; j < LINHAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
}
int main() {
    int tabuleiro[LINHAS][LINHAS] = {0};
    // Posicionar navio 3 (horizontal)tamanho 3 na posição (diagonal)
    iniciaNavio4(tabuleiro, 6, 2, 3);
    // Posicionar navio 3 (horizontal)tamanho 3 na posição (diagonal)
    iniciaNavio3(tabuleiro, 8, 8, 3);
    // Posicionar navio 1 (horizontal)tamanho 3 na posição (2,3)
    iniciaNavio2(tabuleiro, 1, 2, 3);
    // Posicionar navio 2 (vertical)tamanho 3 na posição (5,6)
    iniciaNavio1(tabuleiro, 3, 5, 3);
    // Mostrar o tabuleiro com os navios posicionados
    mostraTabuleiro(tabuleiro);
    printf("\n");
    printf("*** Volte sempre! ***\n");
    printf("\n"); 

    return 0;
}