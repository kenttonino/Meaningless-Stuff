## $\textnormal{The define Directive}$

> - The `#define` directive is used to create object-like <br />
    macros for constants based on values or expressions.

> - `#define` can also be used to create function-like macros <br />
    with arguments that will be replaced by the preprocessor.

> - Be cautious with function-like definitions.

> - Keep in mind that the preprocessor does a direct replacement <br />
    without any calculations, which can lead to unexpected results <br />
    , as demonstrated with the following program.

```c
// Example 1.
#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)

int main() {
  float radius = 2;

  printf("%3.2f\n", PI);
  printf("Area is %5.2f\n", AREA(radius));
  printf("Area with radius + 1: %5.2f\n", AREA(radius+1));

  return 0;
}
```

> - Before the compilation, the preprocessor expands every macro identifier.

> - In this case, every occurrence of `PI` is replaced with 3.14 and <br />
    `AREA(arg)` is replaced with the expression `PI*arg*arg`.

> - The final code sent to the compiler will already have the constant <br />
    values in place.

> - Not that we may expect, however, if you consider the `#define` <br />
    works strictly by replacing text, you will see that `AREA (radius + 1)` <br />
    becomes `PI * radius + 1 * radius + 1`, which is `3.14 * 2 + 1 * 2 + 1`.

> - The solution is to enclose each parameter in parenthesis to obtain <br />
    the correct order of operations.

```c
// Example 2.
#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI*(r)*(r))

int main() {
  float radius = 2;

  printf("%3.2f\n", PI);
  printf("Area is %5.2f\n", AREA(radius));
  printf("Area with radius + 1: %5.2f\n", AREA(radius+1));

  return 0;
}
```
