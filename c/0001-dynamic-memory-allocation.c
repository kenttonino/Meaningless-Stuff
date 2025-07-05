#include <stdio.h>
#include <stdlib.h>

void new_line(int num) {
  for (int i = 0; i < num; i++) {
    printf("\n");
  }
}

int main(void) {
  int num_elements;
  int *elements_array_ptr;
  int sum = 0;

  // * Ask the number of elements they want for this array.
  new_line(2);
  printf("Enter number of elements: ");
  scanf("%d", &num_elements);

  // * Allocate the memory based on the provided number of elements.
  // * Typecast to int pointer.
  elements_array_ptr = (int*) malloc(num_elements * sizeof(int));

  if (elements_array_ptr == NULL) {
    printf("Memory not allocated.");
    new_line(2);
    return 1;
  }

  for (int i = 0; i < num_elements; i++) {
    printf("Enter element index [%d]: ", i);
    scanf("%d", &elements_array_ptr[i]);
    sum += elements_array_ptr[i];
  }

  // * Print the sum.
  printf("Sum: %d", sum);
  new_line(3);

  // * Free allocated memory.
  free(elements_array_ptr);

  return 0;
}
