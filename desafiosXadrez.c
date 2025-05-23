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

int main(){
        //Ultimo exercicio
    // Funcao recursiva para mover a torre para a direita
    void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
    }
    
    // Funcao recursiva para mover a rainha para a esquerda
    void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
    }
    
    // Funcao recursiva com loops aninhados para mover o bispo na diagonal para cima e direita
    void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // Movimento vertical
        for (int j = 0; j < 1; j++) { // Movimento horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
    }
    
    // Movimento do cavalo com loops aninhados complexos
    void moverCavalo() {
    int i, j;
    int movimentos = 2; // duas casas para cima

    for (i = 0; i < movimentos; i++) {
        if (i == 1) {
            for (j = 0; j < 1; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;
                }
            }
        }
        printf("Cima\n");
    }
    }
    
    int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimento da rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return0;
}