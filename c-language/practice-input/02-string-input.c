#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_newline(void) { printf("\n"); }
void clear_terminal(void) { system("clear"); }

int main(void) {
  // Clear terminal.
  clear_terminal();
  add_newline();
  add_newline();

  char *input = malloc(100);
  char *garbage_buffer = malloc(100);

  printf("Enter a string: ");
  scanf("%s", input);
  fgets(garbage_buffer, 100, stdin);

  printf("Length: %ld", strlen(input));
  add_newline();
  printf("Is first element a minus sign: %d", input[0] == '-');
  add_newline();
  printf("Convert to double: %lf", atof(input));
  add_newline();
  printf("Is first element equal to 1: %d", input[0] == '1');
  add_newline();
  add_newline();

  return 0;
}
