## $\textnormal{Variable \ Scope}$

> - `Variable scope` refers to the visibility of variables <br />
    within a program.

> - Variables declared in a function are `local` to that <br />
    block of code and cannot be referred to outside the function.

> - Variables declared outside all functions are `global` to <br />
    entire program.

```c
// Example 1.
#include <stdio.h>

int global1 = 0;

int main() {
    int local1, local2;

    local1 = 5;
    local2 = 10;
    global1 = local1 + local2;
    printf("%d \n", global1);  /* 15 */

    return 0;
}
```

> - When arguments are passed to function parameters, the parameters <br />
    act as local variables.

> - Upon exiting a function, parameters and any local variables in <br />
    the function are destroyed.
