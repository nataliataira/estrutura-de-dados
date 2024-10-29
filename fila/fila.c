#include <stdio.h>
#include <stdlib.h>

typedef struct s_banco
{
    char            nome[50];
    char            agencia[10];
    char            conta[10];
    float           saldo;
    struct  s_banco *prox;
} t_banco;

typedef struct s_fila
{
    t_banco *prim;
    
} t_fila;

int     filaVazia(t_fila *f);
t_fila  *criaFila(void);
void    tiraDaFilaaFila(t_fila *f);
void    mostraFila(t_fila *f);

t_fila  *criaFila(void)
{
    t_fila *f = (t_fila *)malloc(sizeof(t_fila));
    if (!f)
    {
        printf("Erro alocação de mem.\n");
        exit(1);
    }
    f->prim = NULL;
    return(f);
}

void    colocaNaFila(t_fila *f)
{
    t_banco *novo = (t_banco *)malloc(sizeof(t_banco));
    printf("Digite seu nome: ");
    fgets(novo->nome, sizeof(novo->nome), stdin);
    printf("Digite sua agencia: ");
    fgets(novo->agencia, sizeof(novo->agencia), stdin);
    printf("Digite sua conta: ");
    fgets(novo->conta, sizeof(novo->conta), stdin);
    printf("Digite seu saldo: ");
    scanf("%f", &novo->saldo);
    getchar();
    novo->prox = NULL;

    if (filaVazia(f))
        f->prim = novo;
    else
    {
        t_banco *aux = f->prim;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    printf("Cliente adicionado a fila\n\n");
}

int filaVazia(t_fila *f)
{
    return (f->prim == NULL);
}

void    mostraFila(t_fila *f)
{
    t_banco *aux = f->prim;

    if (filaVazia(f))
        printf("A fila está vazia!");
    else
    {
        printf("\nConteúdo da fila:\n");
        while (aux != NULL)
        {
            printf("nm_cliente: %snr_agencia: %snr_conta: %svl_saldo: %.2f\n\n", aux->nome, aux->agencia, aux->conta, aux->saldo);
            aux = aux->prox;
        }
    }
}

void    tiraDaFila(t_fila *f)
{
    if (filaVazia(f))
        printf("Fila vazia.\n");
    else
    {
        t_banco *aux = f->prim;
        f->prim = f->prim->prox;
        free(aux);
        printf("\nCliente retirado\n");
    }
}

int main(void)
{
    t_fila  *f = criaFila();
    colocaNaFila(f);
    colocaNaFila(f);
    mostraFila(f);
    tiraDaFila(f);
    mostraFila(f);
    tiraDaFila(f);
    mostraFila(f);
    return (0);
}