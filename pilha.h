#ifndef PILHA_H
#define PILHA_H

typedef struct no {
  int value;
  struct no *prox;
} No;

typedef struct p {
  struct no *top;
} Pilha;

// inicializar
void initialize(Pilha *p);
// vazia
int isEmpty(Pilha *p);
// topo da pilha
int top(Pilha *p);
// push
void push(Pilha *p, int value);
// pop
int pop(Pilha *p);
// imprimir
void print(Pilha *p);
// maior area
int largestArea(int A[], int n);
#endif