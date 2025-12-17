#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main() {
  int option;
  int *A = NULL;
  int n = 0;

  do {
    printf("\n\n-------------------------------------\n\n");
    printf("\tTAD *PILHA DINAMICAS* \n\n");
    printf("-------------------------------------\n\n");

    printf("1 - Adicionar histograma\n");
    printf("7 - SAIR\n");

    printf("\nEscolha uma Opcao: ");

    if (scanf("%d", &option) != 1) {
      printf("Entrada invalida!\n");
      limparBuffer();
      continue;
    }

    switch (option) {
    case 1: {
      printf("\nQuantas barras tem o histograma? ");
      scanf("%d", &n);

      A = (int *)malloc((n + 1) * sizeof(int));

      if (A == NULL) {
        printf("Erro de alocacao de memoria!\n");
        break;
      }

      for (int i = 0; i < n; i++) {
        printf("Altura da barra %d: ", i);
        scanf("%d", &A[i]);
      }

      A[n] = 0;

      int result = largestArea(A, n + 1);
      printf("\nMaior area do retangulo: %d\n", result);

      free(A);
      A = NULL;
      break;
    }
    case 7:
      printf("Saindo...\n");
      break;

    default:
      printf("Opcao Invalida!\n");
    }

  } while (option != 7);
  return 0;
}
