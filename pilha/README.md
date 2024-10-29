
# Estrutura de Dados: Pilha

Esta atividade explora a implementação de uma **Pilha** em C, uma estrutura de dados que segue o princípio **LIFO** (*Last In, First Out*), onde o último elemento inserido é o primeiro a ser removido.

## O que é uma Pilha?

Uma pilha é uma estrutura de dados linear que permite inserir e remover elementos apenas em uma extremidade, chamada de topo. Esse comportamento segue o conceito de "último a entrar, primeiro a sair", ou seja, o último elemento adicionado à pilha é o primeiro a ser removido.

## Como Funciona?

As operações principais de uma pilha são:

- **Push**: Insere um novo elemento no topo da pilha.
- **Pop**: Remove o elemento do topo da pilha.
- **Topo**: Retorna o elemento do topo sem removê-lo.

Essas operações tornam a pilha uma estrutura útil para problemas que envolvem reversão de ordem ou controle de escopo, como na execução de chamadas de funções.

## Atividade

1. **Implemente todos os métodos de uma pilha (push, pop e topo) de um TAD chamado `Caixa` que contém:**
   - **Atributos**: `codigo` (identificador único), `peso` (peso da caixa), `proximo` (ponteiro para o próximo elemento da pilha).
   - **Funções**:
     - `push`: Insere uma nova `Caixa` no topo da pilha.
     - `pop`: Remove a `Caixa` do topo da pilha.
     - `topo`: Retorna o elemento `Caixa` do topo da pilha sem removê-lo.

pilha.c

## Estrutura do Código

- **`pilha.c`**: Arquivo contendo a implementação da pilha com as operações `push`, `pop` e `topo` para o TAD `Caixa`.
- **`README.md`**: Este arquivo, que explica o conceito de pilha e as atividades propostas.

## Compilação e Execução

Para compilar e executar o código, utilize os seguintes comandos:

```bash
cd pilha
gcc -o pilha pilha.c
./pilha
```

## Conclusão

As pilhas são estruturas de dados versáteis e são amplamente utilizadas para resolver problemas que exigem controle reverso ou acesso restrito a um único ponto de entrada, como em algoritmos de recursão e backtracking.
