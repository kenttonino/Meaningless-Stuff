## $\textnormal{Operator Precedence}$

> - The `+` and `-` are equal in precendence, as are <br />
    `*`, `/`, and `%`.

> - The `*`, `/`, and `%` performed first in order from <br />
    left to right and then `+` and `-`, also in order <br />
    from left to right.

> - You can change the order of operations by using `()`.

```c
// Example 1.
#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;
    int c = 2;
    int result;
    result = a - b + c;  // 4
    printf("%d \n", result);
    result = a + b / c;  // 8
    printf("%d \n", result);
    result = (a + b) / c;  // 5
    printf("%d \n", result);

    return 0;
}
```
