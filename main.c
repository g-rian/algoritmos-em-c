#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    float nota1;
    float nota2;
    char nome[50];
};

void lerAluno(struct Aluno *aluno) {
    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno->nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno->nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno->nota2);
}

float calcularMedia(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2) / 2.0f;
}

void atualizarNota(struct Aluno *aluno) {
    printf("Atual nota do aluno %s\n", aluno->nome);
    printf("Nota 1: %.2f\n", aluno->nota1);
    printf("Nota 2: %.2f\n", aluno->nota2);

    printf("Digite a nova nota 1: ");
    scanf("%f", &aluno->nota1);
    printf("Digite a nova nota 2: ");
    scanf("%f", &aluno->nota2);
}

void imprimirAluno(struct Aluno *alunos, int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n", calcularMedia(alunos[i]));
    }
}

int main() {
    struct Aluno alunos[100];
    int quantidade = 0;
    int opcao;
    int indice;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Atualizar notas do aluno\n");
        printf("3. Imprimir informações do aluno\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (quantidade < 100) {
                    lerAluno(&alunos[quantidade]);
                    quantidade++;
                } else {
                    printf("Limite máximo de alunos atingido.\n");
                }
                break;
            case 2:
                if (quantidade > 0) {
                    printf("Digite o índice do aluno (1-%d): ", quantidade);
                    scanf("%d", &indice);

                    if (indice >= 1 && indice <= quantidade) {
                        atualizarNota(&alunos[indice - 1]);
                    } else {
                        printf("Índice inválido.\n");
                    }
                } else {
                    printf("Nenhum aluno cadastrado para atualizar.\n");
                }
                break;
            case 3:
                imprimirAluno(alunos, quantidade);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}