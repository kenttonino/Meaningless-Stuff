## $\textnormal{Functions \ with \ Arrays \ Parameters}$

> - An array cannot be passed by value to a function.

> - However, an array name is a pointer, so just passing <br />
    an array name to a function is passing a pointer to <br />
    the array.

```c
// Example 1.
#include <stdio.h>

int add_up (int *a, int num_elements);

int main() {
    int orders[5] = {100, 220, 37, 16, 98};

    printf("Total orders is %d\n", add_up(orders, 5));

    return 0;
}

int add_up (int *a, int num_elements) {
   int total = 0;
   int k;

   for (k = 0; k < num_elements; k++) {
        total += a[k];
   }

    return (total);
}
```
