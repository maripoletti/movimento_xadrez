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

    // ----------- Cavalo com loops aninhados (2 para baixo, 1 para esquerda) -----------
    printf("\nMovimento do Cavalo:\n");

    // Constantes para o movimento
    const int movimentos_baixo = 2;
    const int movimentos_esquerda = 1;

    // Loop externo: movimento para baixo (obrigatoriamente com for)
    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");

        // Loop interno opcional: pode ser usado para outra lógica ou controle
        int contador = 0;
        while (contador < 1) {
           
            
            contador++;
        }
    }

    // Movimento final para a esquerda (parte do "L")
    int l = 0;
    while (l < movimentos_esquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
