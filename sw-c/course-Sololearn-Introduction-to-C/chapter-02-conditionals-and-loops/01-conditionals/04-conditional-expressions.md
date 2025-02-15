## $\textnormal{Conditional \ Expressions}$

> - `?:` is another form of `if-else` statement.

```c
// Example 1.
#include <stdio.h>

int main() {
    int y;
    int x = 3;

    y = (x >= 5) ?  5 : x;

    printf("%d", y);

    return 0;
}
```
