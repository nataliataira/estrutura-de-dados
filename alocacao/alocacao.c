#include <stdio.h>
#include <stdlib.h>


typedef struct s_conta
{
    int     codigo;
    char    nome[100];
    char    agencia[10];
    char    conta[10];
    char    telefone[9];
    int     saldo;
}   t_conta;


t_conta *abreConta(void)
{
    int codigo = 0;
    t_conta *conta = (t_conta *)malloc(sizeof(t_conta));
    printf("\nCADASTRO\n");
    printf("Digite o código: ");
    scanf("%d", &codigo);
    getchar();
    printf("Digite o nome: ");
    fgets(conta->nome, sizeof (conta->nome), stdin);
    printf("Digite a agencia: ");
    fgets(conta->agencia, sizeof (conta->agencia), stdin);
    printf("Digite a conta: ");
    fgets(conta->conta, sizeof (conta->conta), stdin);
    conta->saldo = 0;
    printf("Cadastro realizado com sucesso!\n");
    return (conta);
}


int verSaldo(t_conta *conta)
{
    printf("\nSALDO EM CONTA\n");
    return (printf("O saldo na conta é de %d reais.\n", conta->saldo));
}


int deposito(t_conta *conta, int valorDeposito)
{
    printf("\nDEPOSITO\n");
    printf("Deposito de %d reais ", valorDeposito);

    if (valorDeposito < 1)
        return(printf("não foi realizado por ser inferior a 1 real.\n"));
    conta->saldo += valorDeposito;
    return(printf("foi realizado com sucesso!\n"));
}


int saque(t_conta *conta, int valorSaque)
{
    printf("\nSAQUE\n");
    printf("Saque de %d reais ", valorSaque);

    if (conta->saldo < valorSaque)
        return(printf("não foi realizado devido a saldo insuficiente.\n"));
    conta->saldo -= valorSaque;
    return(printf("foi realizado com sucesso!\n"));
}


void    apagar(t_conta *conta)
{
    char    opt;

    printf("\nDeseja apagar essa conta?\n(s: sim | n: não): ");
    scanf("%c", &opt);
    getchar();

    if (opt == 's' || opt == 'S')
        free(conta);
    else
        printf("Operação cancelada.");
}


int main(void)
{
    t_conta *cliente1 = abreConta();

    deposito(cliente1, 100);
    verSaldo(cliente1);
    saque(cliente1, 2);
    verSaldo(cliente1);
    apagar(cliente1);
    return (0);
}