#include <stdio.h>

void new_line(int num_lines) {
  for (int i = 0; i < num_lines; i++) {
    printf("\n");
  }
}

int main(void) {
  new_line(5);
  printf("Pointers & Addresses Examples");

  int x = 1;
  int y = 2;
  int z[10];
  int *int_px;

  int_px = &x;
  printf("%p", int_px);
  new_line(3);

  return 0;
}
