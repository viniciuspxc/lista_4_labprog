#include <stdio.h>

int main(void) {
  int *a = NULL, *b = NULL, *soma = NULL;
  int a1, b1, s;
  a = &a1;
  b = &b1;
  soma = &s;
  printf("Primeiro numero:\n");
  scanf("%d", &a1);
  printf("Segundo numero:\n");
  scanf("%d", &b1);

  *soma = *a + *b;
  printf("%d + %d = %d no endereço [%p]\n", *a, *b, *soma, soma);
  return 0;
}