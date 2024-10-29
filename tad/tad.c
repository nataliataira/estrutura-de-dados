#include <stdio.h>

typedef struct s_endereco
{
    char    logradouro[100];
    char    numero[100];
    char    bairro[30];
    char    cidade[30];
    char    estado[30];
    char    cep[10];
}   t_endereco;

typedef struct s_conta
{
    char        nome[100];
    char        telefone[20];
    t_endereco  enderResidencial;
    t_endereco  enderComercial;
    int         saldo;
}   t_conta;

void abreConta(t_conta *conta)
{
    printf("\nCADASTRO\n");
    printf("Digite o nome: ");
    fgets(conta->nome, sizeof (conta->nome), stdin);

    printf("Digite o telefone: ");
    fgets(conta->telefone, sizeof (conta->telefone), stdin);

    printf("Digite o endereço residencial sem o número: ");
    fgets(conta->enderResidencial.logradouro, sizeof (conta->enderResidencial.logradouro), stdin);

    printf("Digite o número do endereço: ");
    fgets(conta->enderResidencial.numero, sizeof (conta->enderResidencial.numero), stdin);

    printf("Digite o bairro: ");
    fgets(conta->enderResidencial.bairro, sizeof (conta->enderResidencial.bairro), stdin);

    printf("Digite a cidade: ");
    fgets(conta->enderResidencial.cidade, sizeof (conta->enderResidencial.cidade), stdin);

    printf("Digite o estado: ");
    fgets(conta->enderResidencial.estado, sizeof (conta->enderResidencial.estado), stdin);

    printf("Digite o cep: ");
    fgets(conta->enderResidencial.cep, sizeof (conta->enderResidencial.cep), stdin);

    conta->saldo = 0;

    printf("Cadastro realizado com sucesso!\n");
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


int main(void)
{
    t_conta contaCliente1;

    abreConta(&contaCliente1);
    deposito(&contaCliente1, 100);
    verSaldo(&contaCliente1);
    saque(&contaCliente1, 100);
    verSaldo(&contaCliente1);

    return (0);
}