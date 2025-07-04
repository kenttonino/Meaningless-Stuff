## $\textnormal{Input}$

> - `getchar()` returns the value of the next single character input.

```c
// Example 1.
#include <stdio.h>

int main() {
    char a = getchar();

    printf("You entered: %c", a);

    return 0;
}
```

> - `gets()` is used to read input as an ordered sequence of characters, <br />
    also called A `string`.

> - A `string` is stored in char array.

> - `scanf()` scans input that matches the format specifiers and places <br />
    an input value at a variable address.

> - `&` is an address operator and it gives the address in memory of a <br />
    a variable.

> - `scanf()` stops reading as soon as it encounters a space, so text <br />
    such as "Hello World" is two separate inputs.
