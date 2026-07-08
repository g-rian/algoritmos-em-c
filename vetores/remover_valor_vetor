//Declare um vetor de inteiros com 10 posições e preencha-o com valores fornecidos pelo usuário via teclado.
//Exiba o vetor completo antes da remoção.
//Leia um valor inteiro informado pelo usuário que deseja remover do vetor.
//Realize uma busca sequencial no vetor pelo valor informado.
//Caso o valor seja encontrado, realize a remoção física do elemento, deslocando todos os elementos posteriores 
//uma posição à esquerda e decrementando o tamanho lógico do vetor.
//Caso o valor não seja encontrado, exiba uma mensagem informando que o elemento não está presente no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i = 0, valor, valor_encontrado = 0;

    for (i; i<10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }
    for (i = 0; i<10; i++)
    {
        printf("Posicao %d: %d\n", i, vet[i]);
    }

    printf("Digite o valor para remocao: ");
    scanf("%d", &valor);

    for (i = 0; i < 10; i++)
    {
        if (valor == vet[i])
        {
            valor_encontrado = 1;
            for (int j = i; j < 9; j++)
            {
                vet[j] = vet [j+1];
            }
        }// cabe um break nesse for
    }
    if (valor_encontrado != 1)
    {
        printf("Valor nao encontrado!");
    }
    if (valor_encontrado == 1)
    {
        for (i = 0; i < 9; i++)
        {
            printf("Posicao %d: %d\n", i, vet[i]);
        }
    }

    return 0;
}
