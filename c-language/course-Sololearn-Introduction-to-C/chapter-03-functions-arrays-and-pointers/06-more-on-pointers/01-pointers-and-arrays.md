## $\textnormal{Pointers \ and \ Arrays}$

> - Pointers are useful with arrays.

> - An array declaration reserves a block of contiguous <br />
    memory addresses for its elements.

> - With pointers, we can point to the first element and <br />
    then use `address arithmetic` to traverse the array:

```plaintext
+   : Used to move forward to a memory location.
-   : Used to move backward to a memory location.
```

```c
// Example 1.
#include <stdio.h>

int main() {
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = a;
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
}
```

> - An important concept with arrays is that an `array name` acts <br />
    as a pointer to the first element of the array. Therefore, the <br />
    the statement `ptr = a` can be thought of as `ptr = &a[0]`.

> - Consider the following statement, which prints the first element <br />
    of the array: `printf("%d", *a);`.
