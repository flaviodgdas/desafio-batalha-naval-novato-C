#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void iniciaOctaedro(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho){
    for (int i = 0; i < tamanho; i++){
        tabuleiro[x + i][y] = 7; //Octaedro
    }
    
}
void iniciaCruz(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y - i] = 6; // Cruz 
    }
}

void iniciaCone(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 5; // Cone 
    }
}
void iniciaNavio4(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y + i] = 4; // Navio (4)
    }
}

void iniciaNavio3(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x - i][y - i] = 3; // Navio (3)
    }
}
void iniciaNavio2(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 2; // Navio (2)
    }
}
void iniciaNavio1(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; // Navio (1)
    }
}
void mostraTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("*** BATALHA NAVAL ***\n");
    printf("     Aventureiro\n");
    printf("'0' representa agua\n");
    printf("'1' representa Navio1\n");
    printf("'2' representa Navio2\n");
    printf("'3' representa Navio3\n");
    printf("'4' representa Navio4\n");
    printf("'5' representa Cone\n");
    printf("'6' representa Cruz\n");
    printf("'7' representa Octaedro\n");
    printf("\n");
    printf("  A B C D E F G H I J\n"); // Imprime letras das colunas
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i + 0); // Imprime números das linhas
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
}
int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};
    // Posicionar cone()
    iniciaOctaedro(tabuleiro, 8, 3, 1);
    iniciaOctaedro(tabuleiro, 8, 1, 1);
    iniciaOctaedro(tabuleiro, 7, 2, 3);
    iniciaCruz(tabuleiro, 7, 5, 1);
    iniciaCruz(tabuleiro, 5, 5, 1);
    iniciaCruz(tabuleiro, 6, 7, 5);
    iniciaCone(tabuleiro, 2, 3, 1);
    iniciaCone(tabuleiro, 3, 2, 3);
    iniciaCone(tabuleiro, 4, 1, 5);
    // Posicionar navio 3 (horizontal)tamanho 3 na posição (diagonal)
    iniciaNavio4(tabuleiro, 1, 5, 3);
    // Posicionar navio 3 (horizontal)tamanho 3 na posição (diagonal)
    iniciaNavio3(tabuleiro, 2, 8, 3);
    // Posicionar navio 1 (horizontal)tamanho 3 na posição (2,3)
    iniciaNavio2(tabuleiro, 0, 0, 3);
    // Posicionar navio 2 (vertical)tamanho 3 na posição (5,6)
    iniciaNavio1(tabuleiro, 0, 1, 3);
    // Mostrar o tabuleiro com os navios posicionados
    mostraTabuleiro(tabuleiro);
    printf("\n");
    printf("*** Volte sempre! ***\n");
    printf("\n"); 

    return 0;
}
