## $\textnormal{Logical \ Operators}$

> - Logical operators `&&` and `||` are used to form a <br />
    compound Boolean expression that tests multiple <br />
    conditions.

> - A third logical operator is `!` used to reverse the <br />
    state of a Boolean expression.

```c
// Example 1.
#include <stdio.h>

int main() {
    int n = 42;

    if (n > 0 && n <= 100)
        printf("Range (1 - 100).\n");
}
```

> - A compound Boolean expression is evaluated from left to right.
