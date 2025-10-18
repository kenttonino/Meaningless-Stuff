#include <stdio.h>

void new_line(int num_lines) {
  for (int i = 0; i < num_lines; i++) {
    printf("\n");
  }
}

void program_description(void) {
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
  program_description();

  int x = 1;
  int y = 2;
  int z[10];
  int *int_p;

  // Address and value of variable x directly.
  printf("x_address (direct): %p", &x);
  new_line(1);
  printf("x_value (direct): %d", x);
  new_line(2);

  // Print address and value of variable y directly.
  printf("y_address (direct): %p", &y);
  new_line(1);
  printf("y_value (direct): %d", y);
  new_line(2);

  // Address and value of variable x.
  int_p = &x;
  printf("x_address: %p", int_p);
  new_line(1);
  printf("x_value: %d", *int_p);
  new_line(2);

  // Reuse the int_p pointer;
  printf("y_address (before change): %p", &y);
  new_line(1);
  printf("y_value (before change): %d", y);
  new_line(1);

  new_line(3);
  return 0;
}
