## $\textnormal{Unions as Function Parameters}$

> - A function can have union parameters that accept arguments <br />
    `by value` when a copy of the union variable is all that <br />
    is needed.

> - For a function to change the actual value in a union <br />
    memory location, pointers parameters are required.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

union id {
  int id_num;
  char name[20];
};

void set_id (union id *item);
void show_id (union id item);

int main() {
  union id item;

  set_id(&item);
  show_id(item);

  return 0;
}

void set_id(union id *item) {
    item->id_num = 42;
}

void show_id(union id item) {
    printf("ID is %d", item.id_num);
}
```
