## $\textnormal{Output}$

> - `putchar()` ouputs a single character.

```c
// Example 1.
#include <stdio.h>

int main() {
  char a = getchar();

  printf("You entered: ");
  putchar(a);

  return 0;
}
```

> - `puts()` is used to display output as a string.
