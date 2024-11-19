## $\textnormal{Structures}$

> - A `structure` is a user-defined data type that groups related <br />
    variables of different data types.

> - A `structure declaration` includes the keyword `struct`, a <br />
    structure tag for referencing the structure, and curly braces {} <br />
    with a list of variable declarations called `members`.

```c
// Example 1.
struct course {
    int id;
    char title[40];
    float hours;
};
```

> - A `structure` is also called a `composite` or `aggregate` data <br />
    type and some languages refer it as `records`.

```c
// Example 2.
#include <stdio.h>

struct course {
  int id;
  char title[50];
  float hours;
};

void add_new_line(void) { printf("\n"); }

int main(void) {
  int id;
  char title[50];
  float hours;

  add_new_line();
  printf("SizeOf course Struct: %ld", sizeof(struct course));
  add_new_line();
  printf("Sizeof id Variable: %ld", sizeof(id));
  add_new_line();
  printf("Sizeof title Variable: %ld", sizeof(title));
  add_new_line();
  printf("Sizeof hours Variable: %ld", sizeof(hours));
  add_new_line();

  return 0;
}

```

```sh
# Output.
gcc -o code-01 code-01.c
./code-01

SizeOf course Struct: 60
Sizeof id Variable: 4
Sizeof title Variable: 50
Sizeof hours Variable: 4
```

> - Based on the example code above, the struct will have a `structure padding` <br />
    which is a technique to memory boundaries.

> - `struct padding` involes additional bytes known as `padding bytes`, between <br />
    the fields to ensure proper alignment and efficient memory access which result <br />
    to a struct size being larger than the sum of the sizes of its individual members.
