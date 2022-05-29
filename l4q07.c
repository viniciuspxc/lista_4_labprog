#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *ps = malloc(sizeof(char) * 30);
  char *pc = malloc(sizeof(char) * 60);

  printf("String 1:\n");
  scanf("%s", ps);
  printf("String 2:\n");
  scanf("%s", pc);

  strcat(ps,pc);
  printf("String concatenada: %s\n", ps);

  return 0;
}
