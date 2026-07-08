#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//03 - Faça um programa que carregue uma matriz 6x4 com números inteiros, calcule
//e mostre quantos elementos dessa mariz são maiores que 30 e, em seguida, monte
//uma segunda matriz com os elementos dierentes de 30. No lugar do número 30 da
//segunda matriz coloque o número zero.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[4][6],mat2[4][6], maiores = 0;
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 6; c++)
        {
            scanf("%d", &mat[l][c]);
        }
    }
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 6; c++)
        {
            if (mat [l][c]>30)
            {
                maiores=maiores+1;
            }
            if (mat [l][c] == 30)
            {
                mat2[l][c] = 0;
            }
            else
            {
                mat2[l][c]= mat[l][c];
            }
        }
    }
    printf("\n%d são maiores que 30\n", maiores);
    for (int l = 0; l < 4; l++)
    {
        printf("\n");
        for (int c = 0; c < 6; c++)
        {
            printf("%d ", mat2[l][c]);
        }
    }
    return 0;
}
