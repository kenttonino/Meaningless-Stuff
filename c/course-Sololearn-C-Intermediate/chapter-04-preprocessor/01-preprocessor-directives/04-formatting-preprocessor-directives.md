## $\textnormal{Formatting Preprocessor Directives}$

> - When using preprocessor directives, the `#` must be the <br />
    first character on a line.

> - But there can be any amount of white space before `#` <br />
    and between the `#` and the directive.

> - If a `#` directive is lengthy, you can use the <br />
    `\` (continuation character) to extend the definition over <br />
    more than one line.

```c
// Example 1.
#include <stdio.h>
#define VERY_LONG_CONSTANT \
23.678901

#define MAX 100
#define MIN 0
#    define SQUARE(x) \
    x*x

int main() {
  printf("%d\n", VERY_LONG_CONSTANT * SQUARE(2));
  return 0;
}
```
