#include "code-header-file.h"
#include <stdlib.h>
#include <stdio.h>

void clear_terminal() {
  system("clear");
}

void add_newline() {
  printf("\n");
}

int main (void) {
  type_a a = 5;
  type_b b = 2;
  type_c c = a + b;

  add_newline();
  add_newline();
  printf("Header File Samples");
  add_newline();
  printf("a: %d", a);
  add_newline();
  printf("b: %d", b);
  add_newline();
  printf("c: %d", c);
  add_newline();
  add_newline();

  return 0;
}
