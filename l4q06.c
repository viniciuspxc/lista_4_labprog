#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *ps = malloc(sizeof(char) * 30);
  char *pc = malloc(sizeof(char) * 30);

  printf("String:\n");
  scanf("%s", ps);

  pc = ps;
  printf("Copia da string: %s\n", pc);

  return 0;
}
