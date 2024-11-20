## $\textnormal{Data Types}$

> - C supports the following basic data types.

```plaintext
int     : Integer, a whole number.
float   : floating point, a number with fractional part.
double  : Double-precision floating point number.
char    : Single character.
```

> - The amount of storage required for each of these types <br />
    varies by platform.

> - C has a built-in `sizeof` operator that gives the memory <br />
    requirements for a particular data type.

```c
// Example 1.
#include <stdio.h>

int main() {
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n", sizeof(char));

    return 0;
}
```

> - `%ld` is a format specifier.

> - `Format specifier` are also called `conversion specifier`.
