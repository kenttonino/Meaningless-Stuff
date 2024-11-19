## $\textnorma{Formatted Input}$

```c
// Example 1.
#include <stdio.h>

int main() {
    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, text);
}
```

> - The `&` is not needed for a string because a string name <br />
    acts as a pointer.

> - Format specifier can include several options.
```plaintext
%[*][max_field]conversion character
    * (optional)            : Skip the input field.
    max_width (optional)    : Gives the maximum number of characters to assign.
    conversion character    : Converts the arguments based on the indicated type.
        d   : Decimal.
        c   : Character.
        s   : String.
        f   : Float.
        x   : Hexadecimal.
```
