#include <stdio.h>

int main () {
    
    int i, j;
    
    int linha[10];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    // criando tabuleiro matriz 10x10
    int tabuleiro[10][10] = {0};
    
    tabuleiro[4][5] = 3;
    tabuleiro[1][9] = 3;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
        }
    }
    
    printf("  ");
    for (int j = 0; j < 10; j++) 
        {
         printf("%c ", coluna[j]);
        }
        printf("\n");
        
    for (i = 0; i < 10; i++) {
        printf("%d ", i+1);
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}