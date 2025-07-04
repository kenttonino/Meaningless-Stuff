## $\textnormal{Using errno}$

> - Some library functions, such as fopen(), set an error code <br />
    when they do not execute as expected.

> - The error code is set in a global variable named `errno`, <br />
    which is defined in the `errno.h` header file.

> - When using errno you should set it to 0 before calling a <br />
    library function.

> - To output the error code stored in errno, you use fprintf to <br />
    print the `stderr` file stream, the standard error output to <br />
    the screen.

> - Using the stderr is a matter of convention and a good programming <br />
    practice.

> - You can output the errno through the means, but it will be easier <br />
    to keep track of your exception hanlding if you only use stderr <br />
    for error messages.

> - To use errno, you need to declare it with the statement <br />
    `extern int errno`; at the top of your program (or you can include <br />
    the errno.h header file.

```plaintext
// Example 1.
#include <stdio.h>
#include <stdlib.h>

extern int errno;

int main() {
  FILE *fptr;

  errno = 0;
  fptr = fopen("c:\\nonexistantfile.txt", "r");

  if (fptr == NULL) {
    fprintf(stderr, "Error opening file. Error code: %d\n", errno);
    exit(EXIT_FAILURE);
  }

  fclose(fptr);
  return 0;
}
```
