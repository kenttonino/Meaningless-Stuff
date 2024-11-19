## $\textnormal{The #ifdef, #ifndef, and #undef Directives}$

> - The `#ifdef`, `#ifndef`, and `#undef` directives operate <br />
    on macros created with `#define`.

> - For example, there will be compilation problems if the same <br />
    macro is defined twice, so you can check for this with an <br />
    `#ifdef` directive.

> - Or if you want to redefine a macro, you first use `#undef`.

```c
// Example 1.
#include <stdio.h>

#define RATE 0.08
#ifndef TERM
  #define TERM 24
#endif

int main() {
  #ifdef RATE  /* this branch will be compiled */
    #undef RATE
    printf("Redefining RATE\n");
    #define RATE 0.068
  #else  /* this branch will not be compiled */
    #define RATE 0.068
  #endif

  printf("%f  %d\n", RATE, TERM);

  return 0;
}
```

> - Because `RATE` is defined at the top, only the `#ifdef` clause <br />
    will be compiled.

> - The optional `#else` branch compiles when `#ifdef` `RATE` is <br />
    false during preprocessing.

> - An `#endif` is required to close the block of code.

> - An `#elif` directive is like an else if and can be used to <br />
    provide additional alternatives after `#else`.
