#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LIM 8
#define TAM 10

int main(void) {
  srand(time(NULL));

  int *px = (int *)malloc(sizeof(int) * TAM);
  int *pf = (int *)malloc(sizeof(int) * TAM);
  int *pm = (int *)calloc(LIM * LIM, sizeof(int));

  printf("X: \n");
  for (int i = 0; i < TAM; i++) {
    *(px + i) = rand() % LIM;
    printf("[%d] ", *(px + i));
  }

  printf("\nF: \n");
  for (int i = 0; i < TAM; i++) {
    *(pf + i) = rand() % LIM;
    printf("[%d] ", *(pf + i));
  }
  /////////////////////////////////////////////////
  for (int i = 0; i < TAM; i++) {
    *(pm + (*(px + i) * LIM) + (*(pf + i))) += 1;
  }

  printf("\nM:");
  for (int i = 0; i < LIM * LIM; i++) {
    if (i % LIM == 0) {
      printf("\n");
    }
    printf("[%d] ", *(pm + i));
  }

  /////////////////////////////////////
  free(px);
  free(pf);
  free(pm);
  return 0;
}

/*
int m[LIM][LIM];

  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      m[i][j] = 0;
    }
  }

  for (int i = 0; i < TAM; i++) {
    m[*(px + i)][*(pf + i)] += 1;
  }

  printf("\nM:\n");
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      printf("[%d] ", m[i][j]);
    }
    printf("\n");
  }
*/