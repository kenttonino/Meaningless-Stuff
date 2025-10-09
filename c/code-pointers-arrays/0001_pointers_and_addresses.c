#include <stdio.h>

void new_line(int num_lines) {
  for (int i = 0; i < num_lines; i++) {
    printf("\n");
  }
}

void program_descriptoin(void) {
  printf("+-------------------------------+");
  new_line(1);
  printf("|%*s", 32, "|");
  new_line(1);
  printf("| Pointers & Addresses Examples |");
  new_line(1);
  printf("|%*s", 32, "|");
  new_line(1);
  printf("+-------------------------------+");
  new_line(2);
}

int main(void) {
  new_line(2);
  program_descriptoin();

  int x = 1;
  int y = 2;
  int z[10];
  int *int_px;

  int_px = &x;
  printf("x_address: %p", int_px);
  new_line(1);
  printf("x_value: %d", *int_px);

  new_line(3);
  return 0;
}
