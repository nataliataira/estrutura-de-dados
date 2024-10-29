#include <stdio.h>
#include <stdlib.h>

typedef struct s_caixa
{
    int             codigo;
    float           peso;
    struct s_caixa  *prox;
} t_caixa;

typedef struct s_pilha
{
    t_caixa   *topo;
} t_pilha;

t_pilha *criar(void);
void    push(t_pilha *p);
float   pop(t_pilha *p); 
int     pilhaVazia(t_pilha *p);
void    libera(t_pilha *p);
void    mostraPilha(t_pilha *p);


t_pilha *criar(void)
{
    t_pilha *p = (t_pilha *)malloc(sizeof(t_pilha));
    if (!p)
    {
        printf("Erro alocação de mem.\n");
        exit(1);
    }
    p->topo = NULL;
    return (p);
}

void    push(t_pilha *p)
{
    t_caixa *novaCaixa = (t_caixa *)malloc(sizeof(t_caixa));
    if (!novaCaixa)
    {
        printf("Erro alocação de mem.\n");
        exit(1);
    }
    printf("Digite o código e o peso da caixa: ");
    scanf("%i %f", &novaCaixa->codigo, &novaCaixa->peso);
    novaCaixa->prox = p->topo;
    p->topo = novaCaixa;
}

float   pop(t_pilha *p)
{
    float   vlDesempilhado;
    t_caixa *temp;

    if (pilhaVazia(p))
    {
        printf("Pilha vazia.\n");
        exit (1);
    }
    vlDesempilhado = p->topo->peso;
    temp = p->topo->prox;
    free(p->topo);
    p->topo = temp;
    return (vlDesempilhado);
}

int pilhaVazia(t_pilha *p)
{
    if (p->topo == NULL)
        return(1);
    else
        return (0);
}

void libera(t_pilha *p)
{
    t_caixa *caixa = p->topo;

    while (caixa != NULL)
    {
        t_caixa *temp = caixa->prox;
        free (caixa);
        caixa = temp;
    }
    free(p);
}

void mostraPilha(t_pilha *p)
{
 	t_caixa *caixa;

    caixa = p->topo;
    if (pilhaVazia(p))
        printf("A pilha está vazia!");
    else
    {
        printf("\nexibindo conteúdo da pilha:\n");
        while (caixa != NULL)
        {
            printf("[cd_caixa: %d, peso_caixa: %f]\n", caixa->codigo, caixa->peso);
            caixa = caixa->prox;
        }
        printf("\n");
    }
}


int main(void)
{
    t_pilha *testeP = criar();
    push(testeP);
    push(testeP);
    push(testeP);
    mostraPilha(testeP);
    pop(testeP);
    pop(testeP);
    pop(testeP);
    pop(testeP);
    libera(testeP);
    return (0);
}