#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

// Inicializar a Pilja
void initialize(Pilha *p) { p->top = NULL; }
// Vazia
int isEmpty(Pilha *p) { return p->top == NULL; }
// topo da pilha
int top(Pilha *p) { return isEmpty(p) ? -1 : p->top->value; }
// push
void push(Pilha *p, int value) {
  No *novo = (No *)malloc(sizeof(No));
  if (novo) {
    novo->value = value;
    novo->prox = p->top;
    p->top = novo;
  } else {
    printf("Erro ao alocar memória!\n");
  }
}
// pop
int pop(Pilha *p) {
  if (p->top != NULL) {
    No *remover = p->top;
    int valorRemovido = remover->value;
    p->top = remover->prox;
    free(remover);
    return valorRemovido;
  }
  printf("Pilha vazia!\n");
  return -1;
}
// imprimir
void print(Pilha *p) {
  printf("\n--- PILHA ---\n");
  while (p->top) {
    printf("%d\n", p->top->value);
    p->top = p->top->prox;
  }
}

// maior area possivel
int largestArea(int A[], int n) {
  Pilha p;
  initialize(&p);

  int maxArea = 0;
  int i = 0;
  printf("Altura do topo '-1': %d\n", A[top(&p)]);
  printf("Valor de n: %d\n", n);

  while (i < n) {
    printf("\n-----------------------  0%d --------------------\n\n", i);
    printf("Indice: %d\n", i);
    printf("Altura anterior: %d \t & --%d\n", A[i - 1], A[top(&p)]);
    printf("Altura actual: %d\n", A[i]);

    printf("Altura do topo: %d\n", A[top(&p)]);
    printf("Indice do topo: %d\n", A[top(&p)]);

    if (isEmpty(&p) || A[i] >= A[top(&p)]) {
      push(&p, i);
      i++;
    } else {
      int topIndex = pop(&p);
      int height = A[topIndex];

      printf("\t Altura: %d & \tLaragura: %d\n", A[n - 1], A[n]);
      int width;
      if (isEmpty(&p))
        width = i;
      else
        width = i - top(&p) - 1;

      int area = height * width;
      if (area > maxArea)
        maxArea = area;
    }
  }

  return maxArea;
}