## $\textnormal{What \ is \ a Pointer}$

> - `Pointers` are very important in C programming because <br />
    they allow you to easily work with memory locations.

> - They are fundamental to arrays, strings, and other data <br />
    structures and algorithms.

> - A `pointer` is a variable that contains the `address` of <br />
    another variable.

> - In other words, it points to the location assigned to a <br />
    variable and can indirectly access the variable.

```c
// Example 1.
pointer_type *identifier
```

> - `pointer_type` is the type of data the pointer will be pointing to.

> - The actual pointer data type is a hexadecimal number, but when <br />
    declaring a pointer, you must indicate what type of data it <br />
    will be pointing.

```c
// Example 1.
#include <stdio.h>

int main() {
    int j = 63;
    int *p = NULL;
    p = &j;

    printf("The address of j is %x\n", &j);
    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
}
```

> - Pointers should be initialized to `NULL` until they are assigned <br />
    a valid location.

> - Pointers can be assigned the address of a variable using the `&`
    sign.

> - To see what a pointer is pointing to, use the `*` again, as is <br />
    `*p`.

> - In this case the `*` called the indirection or `dereference` <br />
    operator. This process is called `dereferencing`.

> - Some algorithms use a `pointer to a pointer`.

> - This type of variable declaration uses `**`, and can be assigned <br />
    the address of another pointer.

```c
// Example 2.
int x = 12;
int *p = NULL
int **ptr = NULL;
p = &x;
ptr = &p;
```
