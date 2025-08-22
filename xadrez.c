#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas)
{
    if (casas <= 0)
        return;

    // Loops aninhados: cada passo do bispo = 1 "Cima" + 1 "Direita"
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Bispo: Cima\n");
            printf("Bispo: Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverTorre(int casas)
{
    if (casas <= 0)
        return;
    printf("Torre: Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas)
{
    if (casas <= 0)
        return;
    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo(char direcao)
{
    // Dois loops controlam a movimentação vertical e horizontal
    for (int i = 0, j = 0; i < 3 && j < 2; i++, j++)
    {
        // Se já subiu 2 vezes, interrompe o loop principal
        if (i == 2)
        {
            break;
        }

        printf("Cavalo: Cima\n");

        // Condição extra com continue para ignorar caso inválido
        if (j < 0)
        {
            continue;
        }
    }

    // Movimento lateral controlado com switch
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
