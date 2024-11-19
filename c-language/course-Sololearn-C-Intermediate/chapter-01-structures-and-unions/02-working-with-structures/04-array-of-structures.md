## $\textnormal{Array of Structures}$

> - An array can store elements of any data type, <br />
    including structures.

> - After declaring an array of structures, an element <br />
    is accessible with the index number.

> - The `dot operator` is then used to access members <br />
    of the element.

```c
// Example 1.
#include <stdio.h>

typedef struct {
  int h;
  int w;
  int l;
} box;

int main() {
  box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
  int k, volume;

  for (k = 0; k < 3; k++) {
    volume = boxes[k].h*boxes[k].w*boxes[k].l;
    printf("box %d volume %d\n", k, volume);
  }
  return 0;
}

```

> - Arrays of structures are used for data structures such as <br />
    linked lists, binary trees, and more.
