## $\textnormal{While Loop}$

> - The `while` statement is called a `loop structure` because <br />
    it executes statements repeatedly while an expression is true, <br />
    looping over and over again.

```c
// Example 1.
while (expression) {
  statements
}
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int count = 1;

    while (count < 8) {
        printf("Count = %d\n", count);
        count++;
    }

    return 0;
}
```

> - An `infinite loop` is one that continues indefinitely because <br />
    the loop condition never evaluates to false and may cause run <br />
    time error.
