#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas)
{
    if (casas <= 0)
        return;
    printf("Bispo: Cima\n");
    printf("Bispo: Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva da Torre
void moverTorre(int casas)
{
    if (casas <= 0)
        return;
    printf("Torre: Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva da Rainha
void moverRainha(int casas)
{
    if (casas <= 0)
        return;
    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo(char direcao)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cavalo: Cima\n");
    }

    // Escolha da direção lateral
    switch (direcao)
    {
    case 'E':
        printf("Cavalo: Esquerda\n");
        break;
    case 'D':
        printf("Cavalo: Direita\n");
        break;
    default:
        printf("Cavalo: Direcao invalida (use 'E' ou 'D')\n");
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nMovimento do Bispo\n");
    moverBispo(5);

    printf("\nMovimento da Torre\n");
    moverTorre(5);

    printf("\nMovimento da Rainha\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo (direita)\n");
    // Cavalo em L para a direita
    moverCavalo('D');

    // Cavalo em L para a esquerda
    printf("\nMovimento do Cavalo (esquerda)\n");
    moverCavalo('E');

    return 0;
}
