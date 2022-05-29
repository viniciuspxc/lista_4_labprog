#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LIM 10
#define TAM 10

int main(void) {
  srand(time(NULL));

  int *px = malloc(sizeof(int) * TAM);
  int *pf = malloc(sizeof(int) * TAM);

  printf("X: \n");
  for (int i = 0; i < TAM; i++) {
    *(px + i) = rand() % LIM;
    printf("[%d] ", *(px + i));
  }

  for (int i = 0; i < TAM; i++) {
    *(pf + i) = 0;
    for (int n = 0; n < LIM; n++) {
      if (*(px + n) == i) {
        *(pf + i) += 1;
      }
    }
  }

  printf("\n\nF: \n");
  for (int i = 0; i < TAM; i++) {
    printf("[%d] ", *(pf + i));
  }

  return 0;
}
