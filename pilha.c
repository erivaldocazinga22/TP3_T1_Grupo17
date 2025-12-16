#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

// push
void push(No **topo, int value) {
  No *novo = (No *)malloc(sizeof(No));
  if (novo) {
    novo->value = value;
    novo->prox = *topo;
    *topo = novo;
  } else {
    printf("Erro ao alocar memória!\n");
  }
}
// pop
int pop(No **topo) {
  if (*topo != NULL) {
    No *remover = *topo;
    int valorRemovido = remover->value;
    *topo = remover->prox;
    free(remover);
    return valorRemovido;
  }
  printf("Pilha vazia!\n");
  return -1;
}
// imprimir
void print(No *topo) {
  printf("\n--- PILHA ---\n");
  while (topo) {
    printf("%d\n", topo->value);
    topo = topo->prox;
  }
}