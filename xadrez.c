#include <stdio.h>

int main() {
    // ----------- Torre com FOR (5 casas à direita) -----------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ----------- Bispo com WHILE (5 casas na diagonal cima-direita) -----------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ----------- Rainha com DO-WHILE (8 casas à esquerda) -----------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}