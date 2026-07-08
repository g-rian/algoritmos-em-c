#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,cod, cod_maior, cod_menor, carro_passeio, acidente, soma_veiculo = 0, soma_acidente = 0, cidade_menos = 0;
    float maior_indice, menor_indice, media_veiculos, media_acidente, indice;

    for(i=1; i<=5; i++)
    {
        printf("Digite o codigo da cidade: ");
        scanf("%i", &cod);
        printf("Digite o numero de veiculos: ");
        scanf("%i", &carro_passeio);
        printf("Digite o numero de acidentes: ");
        scanf("%i",&acidente);
        indice = acidente/carro_passeio;

        if (i==1)
        {
            maior_indice = indice;
            menor_indice = indice;
            cod_maior = cod;
            cod_menor = cod;
        }
        if (maior_indice<indice)
        {
            cod_maior = cod;
            maior_indice = indice;
        }
        if (menor_indice>indice)
        {
            cod_menor = cod;
            menor_indice = indice;
        }
        soma_veiculo += carro_passeio;

        if (carro_passeio<2000)
        {
            soma_acidente += acidente;
            cidade_menos ++;
        }
    }
    media_veiculos = soma_veiculo/5;
    media_acidente = soma_acidente/cidade_menos;

    return 0;
}
