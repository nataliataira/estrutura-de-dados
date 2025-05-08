#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* prox;
} No;

void inserir(No** inicio, int valor) {
    No* novo = malloc(sizeof(No));
    novo->valor = valor;
    if (*inicio == NULL) {
        novo->prox = novo;
        *inicio = novo;
    } else {
        No* temp = *inicio;
        while (temp->prox != *inicio)
            temp = temp->prox;
        temp->prox = novo;
        novo->prox = *inicio;
    }
}

void imprimir(No* inicio) {
    if (!inicio) return;
    No* temp = inicio;
    do {
        printf("%d -> ", temp->valor);
        temp = temp->prox;
    } while (temp != inicio);
    printf("(inicio)\n");
}
