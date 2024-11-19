## $\textnormal{Function \ Paramaters}$

> - A function's `parameters` are used to receive values required <br />
    by the function.

> - Values are passed to these parametersa as arguments through <br />
    the function call.

> - By default, `arguments` are passed by value, which means <br />
    that a copy of data is given to the parameters of the called <br />
    function, so it won't change.

> - Arguments passed to a function are matched to parameters by position.

```c
// Example 1.
#include <stdio.h>

int sum_up (int x, int y);

int main() {
    int x, y, result;

    x = 3;
    y = 12;
    result = sum_up(x, y);
    printf("%d + %d = %d", x, y, result);

    return 0;
}

int sum_up (int x, int y) {
    x += y;
    return(x);
}
```

> - The parameters in a function declarations are the `formal parameters`.

> - The values passed to these parameters are the arguments, sometimes <br />
    called the `actual parameters`.
