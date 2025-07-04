## $\textnormal{The ## Operator}$

> - The `## operator` is also called the `token pasting` <br />
    operator because it appends, or `pastes`, tokens <br />
    together.

```c
// Example 1.
#include <stdio.h>
#define VAR(name, num) name##num

int main() {
  int x1 = 125;
  int x2 = 250;
  int x3 = 500;

  printf("%d\n", VAR(x, 3));

  return 0;
}
```
