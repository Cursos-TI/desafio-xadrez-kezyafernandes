#include <stdio.h>

/// Constantes para definir as direções
    #define CIMA "Cima\n"
    #define BAIXO "Baixo\n"
    #define ESQUERDA "Esquerda\n"
    #define DIREITA "Direita\n"
    #define DIAGONAL_DIREITA_BAIXO "Baixo, Direita\n"
    #define DIAGONAL_ESQUERDA_CIMA "Cima, Esquerda\n"

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf(DIAGONAL_DIREITA_BAIXO);
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf(DIREITA);
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < 8; i++) {
        printf(ESQUERDA);
    }

    return 0;
}

