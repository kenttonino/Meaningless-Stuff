## $\textnormal{OR \ Operator}$

```c
// Example 1.
#include <stdio.h>

int main() {
    char n = 'X';

    if (n == 'x' || n == 'X')
        printf("Roman numeral value 10.\n");
}
```

> - Parentheses are used for clarity even though `&&` has <br />
    higher precedence than `||` and will be evaluated first.
