## $\textnormal{Memory Management}$

> - When you declare a variable using a basic data type, <br />
    C automatically allocates space for the variable in <br />
    an area of memory called the `stack`.

> - An int variable, for example, is typically allocated <br />
    4 bytes when declared.

```c
// Example 1.
#include <stdio.h>

int main() {
    int x;
    printf("%ld", sizeof(x)); /* output: 4 */
    return 0;
}
```

> - An array with a specified size is allocated `contiguous blocks` <br />
    of memory with each block the size for one element.

> - So long as your program explicitly declares a basic data type <br />
    or an array size, memory is automatically managed.

> - `Dynamic memory allocation` is the process of allocating and <br />
    freeing memory as needed.

> - Now you can prompt at runtime for the number of array elements <br />
    and then create an array with many elements.

> - Dynamic memory is managed with pointers that point to newly <br />
    allocated blocks of memory in an area called the `heap`.

> - In addition to automatic memory management using the stack and <br />
    dynamic memory allocation using the heap, there is `statically` <br />
    `managed data` in main memory for variables that persist for the <br />
    lifetime of the program.
