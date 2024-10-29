
# Alocação de Memória em C

Esta atividade explora os conceitos de **alocação estática** e **alocação dinâmica** de memória em C, abordando as diferenças entre elas e quando utilizar cada uma.

## Alocação Estática

A alocação estática de memória ocorre em tempo de compilação, onde o tamanho e a quantidade de memória necessária são definidos antecipadamente. Isso significa que, uma vez alocada, a quantidade de memória para uma variável ou estrutura permanece fixa durante a execução do programa. Em C, alocações estáticas são feitas para variáveis globais e locais, bem como para arrays de tamanho fixo.

Exemplo de alocação estática:

```c
int array[10]; // Array estático de 10 inteiros
```

## Alocação Dinâmica

A alocação dinâmica de memória ocorre em tempo de execução, permitindo que o programa solicite e libere memória conforme necessário. Isso é útil para situações em que o tamanho dos dados não é conhecido previamente ou quando é necessário gerenciar a memória de maneira eficiente. Em C, a alocação dinâmica é feita utilizando as funções `malloc`, `calloc` e `free`.

Exemplo de alocação dinâmica:

```c
int *array = (int*) malloc(10 * sizeof(int)); // Aloca dinamicamente um array de 10 inteiros
free(array); // Libera a memória alocada
```

## Atividades

1. **Qual a diferença entre alocação dinâmica e estática de memória? Dê exemplos utilizados na linguagem C.**

   - A alocação estática é definida em tempo de compilação e seu tamanho não pode ser alterado durante a execução do programa. Em contrapartida, a alocação dinâmica permite que a memória seja gerenciada em tempo de execução, oferecendo flexibilidade para ajustar a quantidade de memória utilizada.

2. **Crie um programa em C que, utilizando um TAD chamado `Cliente` (com `código`, `nome`, `telefone`), tenha:**
   - Uma função para criar um novo cliente dinamicamente na memória.
   - Uma função para exibir os dados do cliente.
   - Uma função para remover o cliente da memória.

   alocacao.c

## Estrutura do Código

- **`alocacao.c`**: Arquivo que contém os exemplos e funções para demonstrar a alocação estática e dinâmica de memória em C.
- **`README.md`**: Este arquivo, que explica os conceitos de alocação de memória e fornece instruções para compilar e executar o código.

## Compilação e Execução

Para compilar e executar o código, utilize os seguintes comandos:

```bash
cd alocacao
gcc -o alocacao alocacao.c
./alocacao
```

## Conclusão

Entender as diferenças entre alocação estática e dinâmica é essencial para otimizar o uso de memória em programas C, especialmente em aplicações de sistemas embarcados e com restrições de recursos.
