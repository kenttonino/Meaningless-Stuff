## $\textnormal{Conditionals}$

> - Used to perform different computations or actions <br />
    depending on whether a condition evaluates to true <br />
    or false.

> - The `if statement` is called a `conditional control` <br />
    structure because it executes statements when an <br />
    expression is true.

> - The `if statement` is also known as a `decision structure`.

```c
// Example 1.
if (expression)
    statements
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int score = 89;

    if (score > 75)
        printf("You passed.\n");

    return 0;
}
```
