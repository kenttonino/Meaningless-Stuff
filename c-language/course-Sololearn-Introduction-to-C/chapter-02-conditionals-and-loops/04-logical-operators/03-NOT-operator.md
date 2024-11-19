## $\textnormal{NOT Operator}$

```c
// Example 1.
#include <stdio.h>

int main() {
    char n = 'V';

    if (!(n == 'x' || n == 'X'))
        printf("Roman numeral is not 10.\n");
}
```

> - In C, any non-zero value is considered `true` and a `0` <br />
    is `false`.
