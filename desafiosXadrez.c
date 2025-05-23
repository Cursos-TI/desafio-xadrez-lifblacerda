#include <stdio.h>

int main() {
    // Movimento da torre com FOR
    int i;
    printf("Movimento da torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo com WHILE
    int j = 1;
    printf("\nMovimento do bispo (5 casas para cima, na diagonal, direita):\n");
    while (j <= 5) {
        printf("Cima direita\n");
        j++;
    }

    // Movimento da rainha com DO-WHILE
    int k = 1;
    printf("\nMovimento da rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}