#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo (vertical)
        for (int i = 0; i < 1; i++) {
            // Loop interno (horizontal)
            for (int j = 0; j < 1; j++) {
                printf("Cima Direita\n");
            }
        }
        moverBispo(casas - 1); // Chamada recursiva
    }
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Movimento do Cavalo em "L" (2 para cima + 1 para direita)
void moverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        // Duas casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        // Uma casa para a direita
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

int main() {
    // Quantidade de casas / movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // Cavalo faz o "L" apenas uma vez

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
