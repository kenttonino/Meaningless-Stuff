## $\textnormal{Formatted Output}$

```c
// Example 1.
#include <stdio.h>

int main() {
    printf("The tree has %d apples.\n", 22);
    /* output: The tree has 22 apples. */

    printf("\"Hello World!\"\n");
    /* output: "Hello World!" */
}
```

> - Excape sequences begin with a `\`:

```plaintext
\n  : New line.
\t  : Horizontal tab.
\\  : Backslash.
\b  : Backspace.
\'  : Single quote.
\"  : Double quote.
%%  : Percentage.
```

> - A format specifier can include several options:

```plaintext
%[-][width].[precision]conversion character
    - (optional)            : Specifies left alignment of the data in the string.
    width (optional)        : Minimium number of characters for the data.
    . (optional)            : Separates the width from the precision.
    precision (optional)    : Number of decimal places for numeric data.
                            : If "s" is used conversion character, then precision
                              determnines the number of characters to print.
    conversion character    : Converts the argument to indicated type.
        d   : Decimal.
        c   : Character.
        s   : String.
        f   : Float.
        e   : Scientific notation.
        x   : Hexadecimal.
```
