## $\textnormal{Accessing \ Array \ Elements}$

> - The contents of an array are called `element`.

> - In C, index numbers start at `0`.

```c
// Example 1.
int x[5] = {20, 45, 16, 18, 22};

0 => [20]
1 => [45]
2 => [16]
3 => [18]
4 => [22]
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int x[5] = {20, 45, 16, 18, 22};
    printf("The second element is %d\n", x[1]); /* 45 */

    return 0;
}
```

> - The index of an array is also referred to as the `subscript`.
