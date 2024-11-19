## $\textnormal{break \ and \ continue}$

> - The `break` statement is useful for immediately exiting a loop.

```c
// Example 1.
#include <stdio.h>

int main() {
    int num = 5;

    while (num > 0) {
        if (num == 3)
            break;
        printf("%d\n", num);
        num--;
    }

    return 0;
}
```

> - Use `continue` statement if you want to skip ahead to the next iteration.
