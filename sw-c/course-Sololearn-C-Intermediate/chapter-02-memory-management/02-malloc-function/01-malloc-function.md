## $\textnormal{Malloc Function}$

> - The `malloc()` function allocates a specified number of
    `contiguous bytes` in memory.

```c
// Example 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */

  if (ptr != NULL) {
    *(ptr+2) = 50;  /* assign 50 to third int */
  }

  printf("3rd elem equals to %d", *(ptr + 2));
  return 0;
}
```

> - `malloc` returns a pointer to the allocated memory.

> - Notice the sizeof was applied to `*ptr` of int, making <br />
    the code more robust should the `*ptr` declaration be changed <br />
    to a different data type later.

> - The allocated memory is `contiguous` and can be treated as an <br />
    `array`.

> - Instead of using brackets `[]` to refer to elements, pointer <br />
    arithmetic is used to traverse the array.

> - You are advised to use `+` to refer to array elements.

> - Using `++` or `+=` changes the address stored by the pointer.

> - If the allocation is unsuccessful, `NULL` is returned.

> - Because of this, you should include code to check for a NULL <br />
    pointer.

> - A simple two-dimensional array requires `(rows*columns)*sizeof(datatype)`  <br />
    bytes of memory.
