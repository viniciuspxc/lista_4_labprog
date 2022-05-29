#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LIM 8
#define TAM 20

int main(void) {
  srand(time(NULL));
  int r;
  int *px = (int *)malloc(sizeof(int) * TAM);
  int *py = (int *)malloc(sizeof(int) * TAM);
  int *pm = (int *)calloc(LIM * LIM, sizeof(int));

  printf("X: \n");
  for (int i = 0; i < TAM; i++) {
    *(px + i) = rand() % LIM;
    printf("[%d] ", *(px + i));
  }

  printf("\nY: \n");
  for (int i = 0; i < TAM; i++) {
    r = 1 + (rand() % 10);
    if (r > 0 && r <= 3) {
      *(py + i) = *(px + i);
    }
    if (r > 3 && r <= 5) {
      *(py + i) = *(px + i) - 1;
    }
    if (r > 5 && r <= 7) {
      *(py + i) = *(px + i) + 1;
    }
    if (r > 8 && r <= 9) {
      *(py + i) = *(px + i) - 2;
    }
    if (r > 9 && r <= 10) {
      *(py + i) = *(px + i) + 2;
    }
    if (*(py + i) >= LIM) {
      *(py + i) = LIM - 1;
    }
    if (*(py + i) < 0) {
      *(py + i) = 0;
    }
    printf("[%d] ", *(py + i));
  }
  /////////////////////////////////////////////////
  for (int i = 0; i < TAM; i++) {
    *(pm + (*(px + i) * LIM) + (*(py + i))) += 1;
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
  free(py);
  free(pm);
  return 0;
}
