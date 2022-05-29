#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *ps = malloc(sizeof(char) * 30);

  printf("String:\n");
  scanf("%s", ps);

  printf("%lu", strlen(ps));

  return 0;
}
