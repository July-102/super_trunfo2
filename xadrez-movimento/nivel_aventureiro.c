#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando FOR)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando WHILE)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo: 2 para baixo, 1 para esquerda (usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    // Loop FOR externo para os movimentos verticais
    for (int i = 0; i < movimentosBaixo; i++) {
        // Loop WHILE interno para cada passo vertical
        int passo = 0;
        while (passo < 1) {
            printf("Baixo\n");
            passo++;
        }
    }

    // Movimento horizontal após os verticais
    int l = 0;
    while (l < movimentosEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}