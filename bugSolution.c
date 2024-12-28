#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Check pointer validity before dereferencing (although not strictly necessary in this trivial example)
  if (ptr != NULL) { 
    *ptr = 20;
  }

  printf("%d\n", x);
  return 0;
} 