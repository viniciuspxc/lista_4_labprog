#include <stdio.h>

int main(void) {
  int *a = NULL, *b = NULL;
  int a1, b1, s;
  a = &a1;
  b = &b1;
  printf("Primeiro numero:\n");
  scanf("%d", &a1);
  printf("Segundo numero:\n");
  scanf("%d", &b1);

  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
  printf("Primeiro: [%d] \nSegundo [%d]\n", *a, *b);
  return 0;
}