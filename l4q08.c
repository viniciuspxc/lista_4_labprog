#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *ps = malloc(sizeof(char) * 30);
  char *c = malloc(sizeof(char));

  printf("Informe um nome: \n");
  scanf("%s", ps);
  printf("\nInforme uma letra: \n");
  scanf("%s", c);

  for (int i = 0; i < strlen(ps); i++) {
    if (*(ps + i) == *c) {
      printf("A letra '%c' Aparece em [%d]\n", *c, i);
    }
  }

  return 0;
}
