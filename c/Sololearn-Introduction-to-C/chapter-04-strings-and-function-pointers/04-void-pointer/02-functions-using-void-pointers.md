## $\textnormal{Functions Using Void Pointers}$

> - Void pointers are often used for function declarations.

```c
// Example 1.
void * square (const void *);
```

> - Using a `void *` return type allows for any return type.

> - Similarly, parameters that are `void *` accept any <br />
    argument type.

> - If you want to use the data passed in by the parameter <br />
    without changing it, you declare it `const`.

> - You can leave out the parameter name to further insulate <br />
    the declaration from its implementation.

> - Declaring a function this way allow the definition to be <br />
    customized as needed without having to change the declaration.

```c
// Example 1.
#include <stdio.h>

void * square (const void *num);

int main() {
  int x, sq_int;
  x = 6;
  sq_int = square(&x);
  printf("%d squared is %d\n", x, sq_int);

  return 0;
}

void* square (const void *num) {
  static int result;

  result = (*(int *)num) * (*(int *)num);
  return(result);
}
```

> - This `square` function has been written to multiply `ints`, <br />
    which is why the `num` void pointer is cast to `int`.

> - If the implementation were to be changed to allow `square()` to multiply <br />
    `floats`, then only the definition need be changed without having to <br />
    make changes to the declaration.
