## $\textnormal{Accessing Files}$

> - An external file can be opened, read from, and written to in <br />
    a C program.

> - For these operations, C includes the `FILE` type for defining <br />
    a file stream.

> - The `file stream` keeps track of where reading and writing last <br />
    occured.

> - The `stdio.h` library includes file handling functions: `FILE` <br />
    Typedef for defining a file pointer.

> - `fopen(filename, mode)` Returns a FILE pointer to file `filename` <br />
    which is opened using `mode`.

> - If a file cannot be opened, NULL is returned.

> - Mode options are:

```plaintext
r   : Open for reading (file must exist).
w   : Open for writing (file need not exist).
a   : Open for append (file need not exist).
r+  : Open for reading and writing from beginning.
w+  : Open for reading and writing, overwriting file.
a+  : Open for reading and writing, appending to file.
```

> - `fclose(fp)` Closes file opened with FILE fp, returning 0 if close <br />
    was successful.

> - `EOF` (end of file) is returned if there is an error in closing.

> - The following program opens a file for writing and then closes it.

```c
// Example 1.
#include <stdio.h>

int main() {
  FILE *fptr;

  fptr = fopen("myfile.txt", "w");
  if (fptr == NULL) {
    printf("Error opening file.");
    return -1;
  }
  fclose(fptr);
  return 0;
}
```

> - When a string literal is used to specify a file name, the escape <br />
    sequence `\\` indicates a single backslash.

> - In this program, if there is an error when opening the file, a `-1` <br />
    error code is returned to the system.

> - `Note`: closing a file when you are done using it is a good <br />
    programming practice.
