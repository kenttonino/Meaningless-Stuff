## $\textnormal{Accessing Union Members}$

> - You can access the members of a union by using the <br />
    `dot operator` between the variable name and the <br />
    member name.

> - When assignment is performed, the union memory location <br />
    will be used for that member until another member <br />
    assignment is performed.

> - Trying to access a member that isn't occupying the memory <br />
    location gives unexpected results.

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
  union val test;

  test.int_num = 123;
  test.fl_num = 98.76;
  strcpy(test.str, "hello");

  printf("%d\n", test.int_num);
  printf("%f\n", test.fl_num);
  printf("%s\n", test.str);

  return 0;
}
```

> - The last assignment overrides previous assignments, which is <br />
    why `str` stores a value and `int_num` and `fl_num` is meaningless.
