#include <stdio.h>
#include <stdlib.h>

#define TAM 5  // Tamanho das matrizes de habilidade (5x5)

int main() {
    int cone[TAM][TAM] = {0};      // Matriz para padrão CONE
    int cruz[TAM][TAM] = {0};      // Matriz para padrão CRUZ
    int octaedro[TAM][TAM] = {0};  // Matriz para padrão OCTAEDRO

    // -----------------------------
    // Preencher padrão CONE
    // -----------------------------
    // Forma de triângulo com vértice para cima
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (j >= TAM / 2 - i && j <= TAM / 2 + i) {
                cone[i][j] = 1;
            }
        }
    }

    // -----------------------------
    // Preencher padrão CRUZ
    // -----------------------------
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == TAM / 2 || j == TAM / 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // -----------------------------
    // Preencher padrão OCTAEDRO
    // -----------------------------
    // Forma de losango (ou diamante)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int dist = abs(i - TAM / 2) + abs(j - TAM / 2);
            if (dist <= TAM / 2) {
                octaedro[i][j] = 1;
            }
        }
    }

    // -----------------------------
    // Exibir padrão CONE
    // -----------------------------
    printf("Habilidade: CONE\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // -----------------------------
    // Exibir padrão CRUZ
    // -----------------------------
    printf("\nHabilidade: CRUZ\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // -----------------------------
    // Exibir padrão OCTAEDRO
    // -----------------------------
    printf("\nHabilidade: OCTAEDRO\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
