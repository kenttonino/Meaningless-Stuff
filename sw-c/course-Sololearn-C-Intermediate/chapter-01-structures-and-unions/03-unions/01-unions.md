## $\textnormal{Unions}$

> - A `union` allows to store different data types in the <br />
    same memory location.

> - It is like structure because it has members.

> - However, a union variable uses the same memory location <br />
    for all its member's and only one member at a time can <br />
    occupy the memory location.

> - A union `declaration` uses the keyword `union`, a `union tag`, <br />
    and curly braces with a list of `members`.

> - A union members can be of any data type, including basic <br />
    types, strings, arrays, pointers, and structures.

```c
// Example 1.
#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {
    union val test;
    test.int_num = 42;
    printf("%d", test.int_num);
    return 0;
}
```

> - After declaring a union, you can declare union variables.

> - You can even assign one union to another of the same type.

> - Unions are used for `memory management`.

> - The largest member data type is used to determine the size <br />
    of the memory to share and then all members use this one <br />
    location.

> - This process also helps limit `memory fragmentation`.

