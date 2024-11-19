#include <stdio.h>

void add_new_line(void) { printf("\n"); }

int main(void) {
  double input;

  // If input is not numbers, it will return 0.000000.
  printf("Enter input: ");
  scanf("%lf", &input);

  // Display the output.
  printf("Double Input: %lf", input);
  add_new_line();
  printf("Equal to 0: %d", input == 0.000000);
  add_new_line();
  printf("Less than 0: %d", input < (double)0);
  add_new_line();
  printf("Greater than 0: %d", input > (double)0);

  add_new_line();
  add_new_line();
  return 0;
}
