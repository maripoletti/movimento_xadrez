#include <stdio.h>

// ---------------- FUNCOES RECURSIVAS ----------------

// Torre: move 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha: move 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: recursivo com loops aninhados (diagonal cima-direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop aninhado representando diagonal: 1 cima + 1 direita por passo
    for (int i = 0; i < 1; i++) { // vertical (cima)
        for (int j = 0; j < 1; j++) { // horizontal (direita)
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1);
}

// ---------------- MOVIMENTO DO CAVALO ----------------

void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int passos = 0;

    // Loop externo: movimento vertical (duas casas para cima)
    for (int i = 0; i < 3; i++) {
        if (i >= 2) break; // Para em duas casas
        printf("Cima\n");
        passos++;

        // Loop interno: simular lógica de controle extra
        for (int j = 0; j < 2; j++) {
            if (j == 1 && passos == 2) {
                printf("Direita\n"); // Movimento final do "L"
                break;
            }
        }
    }
}

int main() {
    // ----------- Torre com recursividade -----------
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ----------- Bispo com recursividade e loops aninhados -----------
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // ----------- Rainha com recursividade -----------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ----------- Cavalo com loops aninhados complexos -----------
    moverCavalo();

    return 0;
}
