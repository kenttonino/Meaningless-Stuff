## $\textnormal{Nested \ If \ Statements}$

```c
// Example 1.
#include <stdio.h>

int main() {
    int profit = 1400;
    int clients = 18;
    int bonus;

    if (profit > 1000){
        if (clients > 15)
            bonus = 100;
        else
            bonus = 25;
    }
    printf("%d", bonus);
}
```
