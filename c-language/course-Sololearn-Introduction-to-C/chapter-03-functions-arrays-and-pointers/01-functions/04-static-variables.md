## $\textnormal{Static \ Variables}$

> - `Static` variables have a local scope but are not <br />
    destroyed when a function is exited.

> - Therefore, a static variable retains its value for <br />
    the life of the program and can be accessed every <br />
    time the function is re-entered.

```c
// Example 1.
#include <stdio.h>

void say_hello();

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        say_hello();
    }

    return 0;
}

void say_hello() {
    static int num_calls = 1;

    printf("Hello number %d\n", num_calls);
    num_calls++;
}
```
