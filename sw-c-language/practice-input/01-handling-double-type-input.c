#include <stdio.h>
#include <stdlib.h>

void clear_screen() { system("clear"); }
void add_new_line(void) { printf("\n"); }

int main(void) {
  // Cleanup the terminal.
  clear_screen();
  add_new_line();
  add_new_line();
  add_new_line();

  double input;

  // If input is not numbers, it will return 0.000000.
  printf("Enter input: ");
  scanf("%lf", &input);

  // Display the output.
  printf("Double Input: %lf", input);
  add_new_line();
  add_new_line();

  printf("Sizeof input: %ld", sizeof(input));
  add_new_line();
  printf("Sizeof 0.000000: %ld", sizeof(0.000000));
  add_new_line();
  printf("Sizeof (double)0: %ld", sizeof((double)0));
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
