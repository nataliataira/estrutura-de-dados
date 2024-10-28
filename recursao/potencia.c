#include <stdio.h>

// escreva uma função recursiva para calcular o valor de uma base x elevada a um expoente y

int exponencial(int base, int exp)
{
    if (exp == 0)
        return (1);
    else
        return base * (exponencial(base, exp - 1));
}

int main()
{
    printf("exp = %i \n", exponencial(3, 3));
    return 0;
}