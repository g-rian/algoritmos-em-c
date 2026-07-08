#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[10][20];
    int soma[10];
    int i, j;

    // Carregar a matriz
    for(i = 0; i < 10; i++)
    {
        soma[i] = 0;

        for(j = 0; j < 20; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma[i] += matriz[i][j];
        }
    }

    // Multiplicar cada elemento pela soma da linha
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 20; j++)
        {
            matriz[i][j] = matriz[i][j] * soma[i];
        }
    }

    // Mostrar a matriz resultante
    printf("\nMatriz Resultante:\n\n");

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 20; j++)
        {
            printf("%6d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
