#include <stdio.h>
#include <stdlib.h>

void add_new_line(void) { printf("\n"); }
void clear_terminal(void) { system("clear"); }

int main(void) {
  // * Clean up.
  clear_terminal();
  add_new_line();
  add_new_line();

  int num;
  int *num_ptr;

  // * Ask the input.
  printf("Enter a number: ");
  scanf("%d", &num);

  // * Assign the address of num to the pointer.
  num_ptr = &num;

  // * Print the values.
  printf("num value: %d", num);
  add_new_line();
  printf("num address: %p", &num);
  add_new_line();
  printf("num sizeof: %lu", sizeof(num));
  add_new_line();
  printf("access num value through num_ptr: %d", *num_ptr);
  add_new_line();
  printf("access num address through num_ptr: %p", num_ptr);
  add_new_line();
  printf("num_ptr address: %p", &num_ptr);
  add_new_line();
  printf("num_ptr sizeof: %lu", sizeof(num_ptr));
  add_new_line();
  add_new_line();

  return 0;
}
