## $\textnormal{do-while Loop}$

```c
// Example 1.
do {
  statements
} while (expression);
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int count = 1;

    do {
        printf("Count = %d\n", count);
        count++;
    } while (count < 8);

    return 0;
}
```
