## $\textnormal{Function Pointers}$

> - Since pointers can point to an address in any memory location, <br />
    they can also point to the start of executable code.

> - Pointers to functions, or `function pointers`, point to <br />
    executable code for a function in memory.

> - Function pointers can be stored in an array or passed as <br />
    arguments to other functions.

> - A function pointer `declaration` uses the `*` just as you <br />
    would with any pointer.

```c
// Example 1.
return_type (*func_name)(parameters)
```

> - The parentheses around `(*func_name)` are important, without them, <br />
    the compiler will think the function is returning a pointer.

> - After declaring the function pointer, you must assign it to a <br />
    function.

> - The following short program declares a function, declares a function <br />
    pointer, assigns the function pointer to the function, and then calls <br />
    the function through the pointer.

```c
// Example 2.
#include <stdio.h>
void say_hello(int num_times); /* function */

int main() {
    void (*funptr)(int);  /* function pointer */

    funptr = say_hello; /* pointer assignment */
    funptr(3); /* function call */

    return 0;
}

void say_hello(int num_times) {
    int k;
    for (k = 0; k < num_times; k++) {
        printf("Hello\n");
    }
}
```

> - A function name points to the start of executable code, just an array <br />
    name points to its first element.

> - Therefore, although statements such as `funptr = &say_hello` and <br />
    `(*funptr)(3)` are correct, it isn't necessary to include the address <br />
    operator & and the indirection operator * in the function assignment <br />
    and the function call.
