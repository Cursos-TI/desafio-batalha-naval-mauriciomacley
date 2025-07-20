#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa todas as posições com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais (definidas no código)
    int lh = 1, ch = 2; // horizontal
    int lv = 4, cv = 5; // vertical
    int ld1 = 0, cd1 = 0; // diagonal ↘
    int ld2 = 7, cd2 = 2; // diagonal ↙

    // Posiciona navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[lh][ch + i] = NAVIO;
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[lv + i][cv] = NAVIO;
    }

    // Posiciona navio diagonal ↘
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[ld1 + i][cd1 + i] = NAVIO;
    }

    // Posiciona navio diagonal ↙
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[ld2 - i][cd2 + i] = NAVIO;
    }

    // Exibe coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", lh, ch + i);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", lv + i, cv);
    }

    printf("\nCoordenadas do navio diagonal ↘:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", ld1 + i, cd1 + i);
    }

    printf("\nCoordenadas do navio diagonal ↙:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", ld2 - i, cd2 + i);
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro:\n\n   ");
    for (int j = 0; j < TAM; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAM; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
