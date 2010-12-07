#include "fortranside.h"
#include <stdio.h>

void callback(int *i) {
  int x = 0;
  x++;
  printf("Iteration %d\n", *i);
}

int main() {
  int ten = 10;
  loopcll(&ten, &callback);
  return 0;
}
