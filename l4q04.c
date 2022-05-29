#include <stdio.h>

int main(void) {
  char *pv = NULL;
  char v[5];
  pv = &v[0];

  for (int i = 0; i < 5; i++) {
    printf("\n%dº digito:\n", i+1);
    scanf(" %c", pv + i);
  }

  for (int i = 0; i < 5; i++) {
    printf("%c [%p]\n", *(pv + i), pv+i);
  }

  return 0;
}