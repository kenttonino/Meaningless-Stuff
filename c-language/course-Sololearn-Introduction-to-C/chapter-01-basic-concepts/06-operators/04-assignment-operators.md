## $\textnormal{Assignment Operators}$

> - An `assignment operator` evaluates the expression on the right <br />
    side of the equal sign first and then assigns that value to the <br />
    variable on the left side.

```c
// Example 1.
int x = 3;
x = x + 1;  /* x is now 4 */

// Example 2.
x += 1;  /* x = x + 1 */
```

```c
// Example 3.
#include <stdio.h>

int main() {
    int x = 2;

    x += 1;  // 3
    x -= 1;  // 2
    x *= 3;  // 6
    x /= 2;  // 3
    x %= 2;  // 1
    x += 3 * 2;  // 7

    printf("%d", x);

    return 0;
}
```
