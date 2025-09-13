## $\textnormal{The feof and ferror Functions}$

> - In addition to checking for a `NULL` file pointer and <br />
    using `errno`, the `feof()` and `ferror()` functions <br />
    can be used for determining file I/0 errors:

```plaintext
feof(fp)
    - Returns a nonzero value if the end of stream has been
      reached, 0 otherwise, feof also sets EOF.

ferror(fp)
    - Returns a nonzero value if there is an error, 0 for
      no error.
```

> - The following programs incorporates several exception <br />
    handling techniques:

```plaintext
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *fptr;
  int c;

  errno = 0;
  fptr = fopen("c:\\myfile.txt", "r");
  if (fptr == NULL) {
    fprintf(stderr, "Error opening file. %s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }

  while ((c = getc(fptr)) != EOF) /* read the rest of the file */
    printf("%c", c);

  if (ferror(fptr)) {
    printf("I/O error reading file.");
    exit(EXIT_FAILURE);
  }
  else if (feof(fptr))
    printf("End of file reached.");

  fclose(fptr);
  return 0;
}
```

> - Program output will vary.

> - But if the file opens properly and the program completes reading <br />
    the entire file, then the following message displays: <br />
    `End of file reached.`
