#include <stdio.h>
#include <assert.h>
#include "lib.h"

int main() {
  printf("Hello, World!\n");
  int a = answer();
  printf("The answer is %d.\n", a);
  assert(a == 42);
  return 0;
}