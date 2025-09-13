## $\textnormal{The exit Command}$

> - The `exit` command immediately stops the execution of a <br />
    program and sends an exit code back to the calling process.

> - For example, if a program is called by another program, <br />
    then the calling program may need to know the exit status.

> - Using `exit` to avoid a program crash is a good practice <br />
    because it closes any open file connections and processes.

> - You can return any value through an exit statement, but <br />
    `0` for success and `-1` for failure are typical.

> - The predefined `stdlib.h` macros `EXIT_SUCCESS` and <br />
    `EXIT_FAILURE` are also commonly used.

```c
// Example 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int y = 0;

  if (y != 0)
    printf("x / y = %d", x/y);
  else {
    printf("Divisor is 0. Program exiting.");
    exit(EXIT_FAILURE);
  }

  return 0;
}
```
