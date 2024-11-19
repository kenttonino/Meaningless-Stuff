## $\textnormal{Contants}$

> - A `constant` stores a value that cannot be changed from <br />
    its initial assignment.

> - The `const` keyword is used to define constant.

```c
// Example 1.
#include <stdio.h>

int main() {
    const double PI = 3.14;
    printf("%f", PI);

    return 0;
}
```

> - Use can use also the `#define` preprocessor directive which <br />
    uses macros for defining constant values.

> - Before compilation, the preprocessor directive replaces every <br />
    macro identifier in the code with its corresponding value from <br />
    the directive.

> - The final code sent to the compiler will already have the constant <br />
    values in place.

> - The difference between `const` and `#define` is that the former <br />
    uses memory for storage and the latter does not.
