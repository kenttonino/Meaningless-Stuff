## $\textnormal{Type Conversion}$

> - When a numeric expression contains operands of different <br />
    data types, they are automatically converted as necessary <br />
    in a process called `type conversion`.

> - In operation involving both floats and ints, the compiler <br />
    will convert the int values to float values.

```c
// Example 1.
#include <stdio.h>

int main() {
    float price = 6.50;
    int increase = 2;
    float new_price;

    new_price = price + increase;
    printf("New price is %4.2f", new_price);
    /* Output: New price is 8.50 */

    return 0;
}
```

> - `Type casting` is when you want to force the result of an <br />
    expression to a different type you can perform explicit <br />
    type conversion by `type casting`.
