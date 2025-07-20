#include <stdio.h>

#define TAM 10        // Tamanho do tabuleiro (10x10)
#define NAVIO 3       // Valor que representa uma parte do navio
#define TAM_NAVIO 3   // Tamanho dos navios

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Define coordenadas iniciais dos navios (manualmente no código)
    int linhaNavioH = 2; // Linha para navio horizontal
    int colNavioH = 4;   // Coluna inicial para navio horizontal

    int linhaNavioV = 6; // Linha inicial para navio vertical
    int colNavioV = 1;   // Coluna para navio vertical

    // Posiciona o navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioH][colNavioH + i] = NAVIO;
    }

    // Posiciona o navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioV + i][colNavioV] = NAVIO;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", linhaNavioH, colNavioH + i);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("(%d, %d)\n", linhaNavioV + i, colNavioV);
    }

    // Exibe o tabuleiro completo
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
