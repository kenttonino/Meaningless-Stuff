## $\textnormal{Conditional Compilation Directives}$

> - Conditional compilation of segments of code is controlled <br />
    by a set of directives: `#if`, `#else`, `#elif`, and `#endif`.

```c
// Example 1.
#include <stdio.h>
#define LEVEL 4

int main() {
  #if LEVEL > 6
    /* do something */
  #elif LEVEL > 5
    /* else if branch */
  #elif LEVEL > 4
    /* another else if */
  #else
    /* last option here */
  #endif

  return 0;
}
```

> - There are instances where such conditional compilation can be <br />
    useful, but this type of code should be used sparingly.

> - The `defined()` preprocessor operator can be used with `#if` <br />
    as in:

```c
// Example 2.
#if !defined(LEVEL)
  /* statements */
#endif
```

> - The `#if` and if statement are not interchangeable.

> - The `#if` is evaluated using data available to the preprocessor, <br />
    which then sends only the true branch for compilation.

> - An if statement uses data provided at runtime with the possibility <br />
    of branching to any else clause.
