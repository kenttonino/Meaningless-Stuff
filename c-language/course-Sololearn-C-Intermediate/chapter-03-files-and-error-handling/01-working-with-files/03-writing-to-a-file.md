## $\textnormal{Writing to a File}$

> - The `stdio.h` library also includes functions for writing <br />
    to a file.

> - When writing to a file, newline characters `\n` must be <br />
    explicitly added.

> - `fputc(char, fp)` writes character `char` to the file <br />
    pointed to by `fp`.

> - `fputs(str, fp)` writes string `str` to the file pointed <br />
    to by `fp`.

> - `fprintf(fp, str, vars)` prints string `str` to the file <br />
    pointed to by `fp`.

> - `str` can optionally include format specifiers and a list <br />
    of variables vars.

> - The following demonstrates writing to a file.

```c
// Example 1.
#include <stdio.h>

int main() {
  FILE *fptr;
  char filename[50];
  char c;

  printf("Enter the filename of the file to create: ");
  gets(filename);
  fptr = fopen(filename, "w");

  /* write to file */
  fprintf(fptr, "Inventory\n");
  fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
  fputs("End of List", fptr);

  fclose(fptr);

  /* read the file contents */
  fptr = fopen(filename, "r");
  while ((c = getc(fptr)) != EOF)
    printf("%c", c);
  fclose(fptr);
  return 0;
}
```

> - The `w` arguments defines `writing mode` for the `fopen` function.
