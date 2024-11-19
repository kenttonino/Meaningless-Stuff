## $\textnormal{free Function}$

> - The `free()` function is a memory management function that <br />
    is called to release memory.

> - By `freeing memory`, you make more available for use later <br />
    in your program.

```c
// Example 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // A block of 10 ints.
    ptr = malloc(10*sizeof(*ptr));

    if (ptr != NULL) {
        // Assign 50 to third int.
        *(ptr+2) = 50;
    }

    // 50
    printf("%d\n", *(ptr+2));

    // Free memory.
    free(ptr);

    return 0;
}
```
