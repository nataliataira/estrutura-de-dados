#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* ant;
    struct No* prox;
} No;

void inserir(No** lista, int valor) {
    No* novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = *lista;
    novo->ant = NULL;
    if (*lista)
        (*lista)->ant = novo;
    *lista = novo;
}

void imprimir(No* lista) {
    while (lista) {
        printf("%d <-> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}
