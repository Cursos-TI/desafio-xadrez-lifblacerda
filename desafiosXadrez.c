#include <stdio.h>

int main() {
    // Movimento da torre com FOR (5 casas para a direita)
    int i;
    printf("Movimento da torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo com WHILE (5 casas para cima, na diagonal, direita)
    int j = 1;
    printf("\nMovimento do bispo:\n");
    while (j <= 5) {
        printf("Cima direita\n");
        j++;
    }

    // Movimento da rainha com DO-WHILE (8 casas para a esquerda)
    int k = 1;
    printf("\nMovimento da rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

     // Movimento do cavalo com loops aninhados (2 para baixo, 1 para a esquerda)
    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop: duas casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        // Segundo loop (while): após cada "baixo", verificar se chegou no segundo passo
        int passo = i;
        while (passo == 1) {
            printf("Esquerda\n");  // Uma casa para a esquerda após dois passos para baixo
            passo++;
        }
    }

    return 0;
}