#ifndef PILHA_H
#define PILHA_H

typedef struct no {
  int value;
  struct no *prox;
} No;

typedef struct p {
  struct no *top;
} Pilha;

// push
void push(No **topo, int value);
// pop
int pop(No **topo);
// imprimir
void print(No *topo);

#endif