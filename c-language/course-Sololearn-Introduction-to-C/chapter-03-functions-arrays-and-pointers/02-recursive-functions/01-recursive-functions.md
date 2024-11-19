## $\textnormal{Recursive \ Functions}$

> - A `recursive function` is one that calls itself and <br />
    includes a base case, or exit condition, for ending <br />
    the recursive calls.

```c
// Example 1.
#include <stdio.h>

//function declaration
int factorial(int num);

int main() {
  int x = 5;

  printf("The factorial of %d is %d\n", x, factorial(x));

  return 0;
}

//function definition
int factorial(int num) {

  if (num == 1)  /* base case */
    return (1);
  else
    return (num * factorial(num - 1));
}
```

> - A recursive function requires a base case to prevent an <br />
    infinite loop.
