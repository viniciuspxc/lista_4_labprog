#include <stdio.h>

int main(void) {
  int *pa = NULL, *menor = NULL;
  int a, m = 0;
  pa = &a;
  menor = &m;
printf("\nDigite 0 para encerrar\n");
  do {
    printf("\nNumero:\n");
    scanf("%d", pa);

    if (!*menor) {
      *menor = *pa;
    }
    if (*menor > *pa) {
      *menor = *pa;
    }
    printf("Menor valor difitado %d\n", *menor);
  } while (*pa);
  return 0;
}