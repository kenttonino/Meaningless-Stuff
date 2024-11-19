## $\textnormal{Pointers to Unions}$

> - A pointer to a union points to the memory location <br />
    allocated to the union.

> - A `union pointer` is declared by using the keyword union <br />
    and the `union` tag along with * and the pointer name.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};

int main() {
  union val info;
  union val *ptr = NULL;
  ptr = &info;
  ptr->int_num = 10;
  printf("info.int_num is %d", info.int_num);

  return 0;
}
```

> - When you want to access the union members through a pointer, <br />
    the `->` operator is required.

> - `(*ptr).int_num` is the same as `ptr->int_num`.
