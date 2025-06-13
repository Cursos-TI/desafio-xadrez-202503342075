#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentação da Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita (recursiva)\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentação do Bispo (Diagonal)
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita (recursiva)\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentação da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda (recursiva)\n");
    moverRainha(casas - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo:\n");

    // Possíveis movimentos em L (x, y)
    int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    for (int k = 0; k < 8; k++) {
        printf("Movimento em L para (%d, %d)\n", dx[k], dy[k]);
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("Movimentação Recursiva da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimentação Recursiva do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimentação Recursiva da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("Movimentação Avançada do Cavalo (com continue e break):\n");

    int posX = 4, posY = 4; // Posição inicial do Cavalo no tabuleiro 8x8

    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            // Ignora movimentos que não formam um L
            if (!((abs(dx) == 2 && abs(dy) == 1) || (abs(dx) == 1 && abs(dy) == 2))) {
                continue;
            }

            int novoX = posX + dx;
            int novoY = posY + dy;

            // Verifica se o movimento está fora do tabuleiro
            if (novoX < 0 || novoX >= 8 || novoY < 0 || novoY >= 8) {
                printf("Movimento para fora do tabuleiro: (%d, %d) - Encerrando.\n", novoX, novoY);
                break;
            }

            printf("Movimento válido em L para (%d, %d)\n", novoX, novoY);
        }
    }

    printf("\n");
    return 0;
}
