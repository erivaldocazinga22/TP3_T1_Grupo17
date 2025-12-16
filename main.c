
#include <stdio.h>

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main() {
  int option;

  do {
    printf("\n\n-------------------------------------\n\n");
    printf("\tTAD *PILHA DINAMICAS* \n\n");
    printf("-------------------------------------\n\n");

    printf("1 - Adicionar Soldado\n");
    printf("7 - SAIR\n");

    printf("\nEscolha uma Opcao\n");

    if (scanf("%d", &option) != 1) {
      printf("Entrada inválida!\n");
      limparBuffer();
      continue;
    }

    switch (option) {

    case 7:
      printf("Saindo...\n");
      break;

    default:
      printf("Opcao Invalida!\n");
    }

  } while (option != 7);
  return 0;
}
