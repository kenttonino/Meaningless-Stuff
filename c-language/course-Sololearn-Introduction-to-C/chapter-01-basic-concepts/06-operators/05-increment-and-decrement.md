## $\textnormal{Increment \ & \ Decrement}$

```c
// Example 1.
z--;  /* decrement z by 1 */
y++; /* increment y by 1 */
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int x, y, z;

    z = 3;
    x = z--;  /* assign 3 to x, then decrement z to 2 */
    printf("x=%d \n", x);

    y = 3;
    x = ++y;  /* increment y to 4, then assign 4 to x */

    printf("x=%d \n", x);

    printf("y=%d \n", y);

    return 0;
}
```

> - The `prefix` from increments/decrements the variable and then <br />
    uses it in the assignment statement.

> - The `postfix` form uses the value of the variable first, before <br />
    incrementing/decrementing it.
