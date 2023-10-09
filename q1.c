#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
int main() {
  int vetor[TAM], maior, menor;

  srand(time(NULL));
  maior = 0;
  menor = 100;
  for (int i = 0; i < TAM; i++) {
    vetor[i] = rand() % 101;
    // maior = vetor[0];
    // menor = vetor[0];
    if (vetor[i] > maior)
      maior = vetor[i];
    if (vetor[i] < menor)
      menor = vetor[i];

    printf(" número %d: %d\n", i + 1, vetor[i]);
  }
  printf("menor %d\n", menor);
  printf("maior %d\n", maior);
  printf("%d", maior + menor);
}