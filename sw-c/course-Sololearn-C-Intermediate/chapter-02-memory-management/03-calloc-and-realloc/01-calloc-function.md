## $\textnormal{calloc Function}$

> - The `calloc()` function allocates memory based on the size <br />
    of a specific item, such as a structure.

> - The program below uses `calloc` to allocate memory for a <br />
    structure and `malloc` to allocate memory for the string <br />
    string within the structure.

> - `calloc` stands for contiguous allocation.

```plaintext
// Example 1.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int num;
  char *info;
} record;

int main() {
  record *recs;
  int num_recs = 2;
  int k;
  char str[ ] = "This is information";

  recs = calloc(num_recs, sizeof(record));
  if (recs != NULL) {
    for (k = 0; k < num_recs; k++) {
      (recs+k)->num = k;
      (recs+k)->info = malloc(sizeof(str));
      strcpy((recs+k)->info, str);
    }
  }

  for (k = 0; k < num_recs; k++) {
    printf("%d\t%s\n", (recs+k)->num, (recs+k)->info);
  }

  return 0;
}
```

> - `calloc` allocates blocks of memory within a `contiguous block` of <br />
    memory for an array of structure elements.

> - You can navigate from one structure to the next with pointer arithmetic.

> - After allocating room for a structure, memory must be allocated <br />
    for the string within the structure.

> - Using a pointer for the `info` member allows any length string <br />
    to be stored.

> - Dynamically allocated structures are the basis of `linked lists` <br />
    and `binary trees` as well as other data structures.
