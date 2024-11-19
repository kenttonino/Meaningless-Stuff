#include "helpers.h"

int main(void) {
  // Clear terminal.
  clear_terminal();
  add_new_line();
  add_new_line();

  int num;
  int *num_ptr;

  printf("Enter a number: ");
  scanf("%d", &num);

  // Assign the locatino of num to the pointer.
  num_ptr = &num;

  printf("num + 3: %d", *num_ptr + 3);
  add_new_line();
  printf("Increment num by 1: %d", ++(*num_ptr));
  add_new_line();
  add_new_line();

  return 0;
}
