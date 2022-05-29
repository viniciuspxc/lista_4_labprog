#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int *ps = malloc(sizeof(int) * 10);

  printf("Vetor: \n");
  for (int i = 0; i < 10; i++) {
    *(ps + i) = rand() % 10;
    printf("[%d] ", *(ps + i));
  }

  for (int i = 1; i < 10; i++) {

    if (*(ps + i - 1) > *(ps + i)) {
      *(ps + i - 1) = *(ps + i - 1) ^ *(ps + i);
      *(ps + i) = *(ps + i - 1) ^ *(ps + i);
      *(ps + i - 1) = *(ps + i - 1) ^ *(ps + i);
      i = 0;
    }
  }

  printf("\n\nVetor ordenado: \n");
  for (int i = 0; i < 10; i++) {
    printf("[%d] ", *(ps + i));
  }

  return 0;
}
