## $\textnormal{Pointers \ and \ Functions}$

> - With pointer paramaters, your functions can alter actual <br />
    data rather than a copy of data.

> - To change the actual values of variables, the calling <br />
    statement passes addresses to pointer parameters in a <br />
    function.

```c
// Example 1.
#include <stdio.h>

void swap (int *num1, int *num2);

int main() {
    int x = 25;
    int y = 100;

    printf("x is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y);

    return 0;
}

void swap (int *num1, int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
```

> - The program swaps the actual values of the variables, as the function <br />
    accesses them by address using pointers.
