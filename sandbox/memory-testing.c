#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int *p = malloc(sizeof(int));
  size_t size = sizeof(char);
  printf("%p\n", p);
  printf("Size of int: %zu bytes", size);
}
