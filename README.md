# Cadastro de Alunos

Este projeto em C implementa um sistema simples para cadastrar alunos, atualizar notas e exibir as informações do aluno com a média calculada.

## Funcionalidades

- Cadastrar um aluno com nome, nota 1 e nota 2
- Atualizar as notas de um aluno já cadastrado
- Exibir todos os alunos cadastrados com suas médias
- Sair do programa

## Estrutura

O programa principal está em `main.c` e utiliza uma estrutura `Aluno` para armazenar:

- nome
- nota1
- nota2

## Como compilar

No terminal, execute:

```bash
gcc main.c -o main
```

## Como executar

```bash
./main
```

## Menu do programa

1. Cadastrar aluno
2. Atualizar notas do aluno
3. Imprimir informações do aluno
4. Sair

## Observação

O programa mantém até 100 alunos em memória e calcula a média com a fórmula:

```c
(nota1 + nota2) / 2.0
```
