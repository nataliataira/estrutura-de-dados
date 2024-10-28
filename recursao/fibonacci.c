#include <stdio.h>

/* Escrever uma função recursiva para calcular uma sequencia de fibonacci

A sequência de Fibonacci consiste em uma série de números, tais que, 
definindo seus dois primeiros números como sendo 0 e 1, os números seguintes 
são obtidos através da soma dos seus dois antecessores.

Exemplo da sequência:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...*/

int fibonacci(int posicao)
{
    if (posicao == 0)
        return (0);
    else if (posicao == 1)
        return (1);
    else
        return (fibonacci(posicao - 1) + fibonacci(posicao - 2));
}

int main(void)
{
    printf("fib = %i\n", fibonacci(6));
    return (0);
}
