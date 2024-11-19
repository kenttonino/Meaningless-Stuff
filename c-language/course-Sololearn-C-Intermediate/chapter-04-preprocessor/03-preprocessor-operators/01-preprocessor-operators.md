## $\textnormal{Preprocessor Operators}$

> - The C preprocessor provides the following operators:

```plaintext
The # Operator
    - The # macro operator is called the "stringification" or
      "stringizing" operator and tells the preprocessor to
      convert a parameter to a string constant.
    - White space on either side of the argument are ignored
      and escape sequences are recognized.
```

```c
// Example 1.
#include <stdio.h>

#define TO_STR(x) #x

int main() {

  printf("%s\n", TO_STR( 123\\12 ));

  return 0;
}
```
