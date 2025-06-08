#include <stdio.h>

int main() {
    // Constantes de movimento
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    int i;

    printf("=== MOVIMENTOS DAS PECAS ===\n\n");

    // -------------------------
    // BISPO - 5 casas na diagonal superior direita (Cima + Direita)
    // Usando FOR
    printf("Movimento do BISPO:\n");
    for(i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-----------------------------\n");

    // -------------------------
    // TORRE - 5 casas para a direita
    // Usando WHILE
    printf("Movimento da TORRE:\n");
    i = 0;
    while(i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("-----------------------------\n");

    // -------------------------
    // RAINHA - 8 casas para a esquerda
    // Usando DO-WHILE
    printf("Movimento da RAINHA:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < MOV_RAINHA);
    printf("-----------------------------\n");

    return 0;
}

