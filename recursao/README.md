
# Recursão

Nesta atividade, exploramos o conceito de recursão e implementamos duas funções recursivas em C: uma para calcular a potência de uma base elevada a um expoente e outra para calcular a sequência de Fibonacci.

## O que é Recursão?

Recursão é uma técnica de programação em que uma função chama a si mesma para resolver um problema. Cada chamada recursiva reduz o problema para um caso menor até alcançar uma condição base, onde a função para de se chamar. Esse método é útil para problemas que podem ser divididos em subproblemas semelhantes ao original.

## Funções Implementadas

### 1. Função Recursiva para Potência

Esta função calcula o valor de uma base `x` elevada a um expoente `y` utilizando recursão.

**Protótipo:**
```c
int potencia(int x, int y);
```

- **Parâmetros**:
  - `x`: Base (número a ser elevado).
  - `y`: Expoente (número ao qual a base será elevada).
- **Retorno**: Retorna o valor de `x` elevado a `y`.

**Exemplo de Uso:**
```c
int resultado = potencia(2, 3); // resultado será 8 (2^3)
```

## Compilação e Execução

Para compilar e executar o código desta atividade, utilize os comandos abaixo:

```bash
gcc -o potencia potencia.c
./potencia
```

### Exemplo de Saída

Para a função de potência com `x = 2` e `y = 3`, a saída será:
```plaintext
Potência = 8
```

### 2. Função Recursiva para Sequência de Fibonacci

Esta função calcula o valor da sequência de Fibonacci para um índice `n`. A sequência de Fibonacci é uma série de números em que os dois primeiros termos são 0 e 1, e cada termo subsequente é a soma dos dois anteriores.

**Protótipo:**
```c
int fibonacci(int n);
```

- **Parâmetros**:
  - `n`: Índice da sequência de Fibonacci.
- **Retorno**: Retorna o valor da sequência de Fibonacci para o índice `n`.

**Exemplo de Uso:**
```c
int resultado = fibonacci(6); // resultado será 8 (sequência: 0, 1, 1, 2, 3, 5, 8)
```

## Compilação e Execução

Para compilar e executar o código desta atividade, utilize os comandos abaixo:

```bash
gcc -o fibonacci fibonacci.c
./fibonacci
```

### Exemplo de Saída

Para a função de Fibonacci com `n = 6`, a saída será:
```plaintext
Fibonacci = 8
```

---

Esse `README.md` fornece uma visão geral da recursão e descreve as funções implementadas para esta atividade.
