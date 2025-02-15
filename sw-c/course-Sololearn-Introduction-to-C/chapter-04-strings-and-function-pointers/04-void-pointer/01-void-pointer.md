## $\textnormal{Void Pointer}$

> - The `void` pointer is used to refer to any address type in <br />
    memory and has a declaration that looks like `void *ptr`;

```c
// Example 1.
#include <stdio.h>

int main() {
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));

    return 0;
}
```

> - When dereferencing a void pointer, you must firt `type cast` the <br />
    pointer to the appropriate data type before dereferencing with `*`.

> - You cannot perform pointer arithmetic with void pointers.
