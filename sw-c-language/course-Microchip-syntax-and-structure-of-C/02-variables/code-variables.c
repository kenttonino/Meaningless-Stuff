#include <stdio.h>
#include <stdlib.h>

// Custom types.
// Minimum 16 bits.
// Maximum 32 bits.
typedef unsigned int uint16_t;

void clear_terminal() {
  system("clear");
}

void add_newline() {
  printf("\n");
}

int main() {
  uint16_t x;
  uint16_t y = 12;
  int a, b, c;
  long int myVar = 0x12345678;
  long z;
  char first = 'a', second, third = 'c';
  signed char fourth = -4;
  float big_number = 6.02e+23;

  // Cleanup the screen.
  clear_terminal();
  add_newline();
  add_newline();

  printf("Sizeof Unsigned Integer x: %ld", sizeof(x));
  add_newline();
  printf("Sizeof Unsigned Integer y: %ld", sizeof(y));
  add_newline();
  printf("Sizeof Integer a: %ld", sizeof(a));
  add_newline();
  printf("Sizeof Integer b: %ld", sizeof(b));
  add_newline();
  printf("Sizeof Integer c: %ld", sizeof(c));
  add_newline();
  printf("Sizeof Long Integer myVar: %ld", sizeof(myVar));
  add_newline();
  printf("Sizeof Long z: %ld", sizeof(z));
  add_newline();
  printf("Sizeof Character first: %ld", sizeof(first));
  add_newline();
  printf("Sizeof Signed Char Fourth: %ld", sizeof(fourth));
  add_newline();
  printf("Sizeof Character second: %ld", sizeof(second));
  add_newline();
  printf("Sizeof Character third: %ld", sizeof(third));
  add_newline();
  printf("Sizeof Float big_number: %ld", sizeof(big_number));


  add_newline();
  add_newline();
  add_newline();
  return 0;
}
