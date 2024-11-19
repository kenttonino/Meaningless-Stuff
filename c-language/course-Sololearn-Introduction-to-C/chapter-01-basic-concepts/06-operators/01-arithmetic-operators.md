##  $\textnormal{Arithmetic Operators}$

> - C supports the following arithmetic operators.

```plaintext
+   : Addition.
-   : Subtraction.
*   : Multiplication.
/   : Division.
%   : Modulus division.
```

```c
// Example 1.
#include <stdio.h>

int main() {
    int length = 10;
    int width = 5;
    int area;

    area = length * width;
    printf("%d \n", area);  /* 50 */

    return 0;
}
```

> - C has two division operators.

```plaintext
/
    - This operator performs differently depending on the data types
      of the operands.
    - When both operands are int data types, "integer division", also
      called "truncated division", removes any remainder to result in
      an integer.

%
    - Return only the reminder of integer division.
    - Modulus division cannot be perform on floats and double.
```
