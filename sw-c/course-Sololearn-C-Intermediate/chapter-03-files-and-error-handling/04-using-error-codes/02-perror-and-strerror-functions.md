## $\textnormal{The perror and strerror Functions}$

> - When a library function sets errno, a cryptic error number <br />
    is assigned.

> - For a more descriptive messaged about the error, you can <br />
    use `perror()`.

> - You can also obtain the message using `strerror()` in the <br />
    `string.h` header file, which returns a pointer to the <br />
    message text.

> - `perror()` must include a string that will precede the actual <br />
    error message.

> - Typically, there is no need for both perror() and strerror() <br />
    for the same error, but both are used in the program below for <br />
    demonstration purpose.

```plaintext
// Example 1.
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
  FILE *fptr;

  errno = 0;
  fptr = fopen("c:\\nonexistantfile.txt", "r");
  if (fptr == NULL) {
    perror("Error");
    fprintf(stderr, "%s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }

  fclose(fptr);
  return 0;
}
```
