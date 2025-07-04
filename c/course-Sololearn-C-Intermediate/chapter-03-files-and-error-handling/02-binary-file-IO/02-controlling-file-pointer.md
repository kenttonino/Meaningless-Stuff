## $\textnormal{Controlling the File Pointer}$

> - There are functions in `stdio.h` for controlling the <br />
    location of the file pointer in the binary file.

> - `ftell(fp)` returns a long int value corresponding to <br />
    the `fp` file pointer position in number of bytes from <br />
    the start of the file.

> - `fseek(fp, num_bytes, from_pos)` moves the `fp` file <br />
    pointer position by `num_bytes` bytes relative to position <br />
    `from_pos`, which can be one of the following constants:

```plaintext
SEEK_SET    : Start the file.
SEEK_CUR    : Current position.
SEEK_END    : End of file.
```

> - The following program reads a record from a file of structures.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char name[20];
} item;

int main() {
  FILE *fptr;
  item first, second, secondf;

  /* create records */
  first.id = 10276;
  strcpy(first.name, "Widget");
  second.id = 11786;
  strcpy(second.name, "Gadget");

  /* write records to a file */
  fptr = fopen("info.dat", "wb");
  fwrite(&first, 1, sizeof(first), fptr);
  fwrite(&second, 1, sizeof(second), fptr);
  fclose(fptr);

  /* file contains 2 records of type item */
  fptr = fopen("info.dat", "rb");

  /* seek second record */
  fseek(fptr, 1*sizeof(item), SEEK_SET);
  fread(&secondf, 1, sizeof(item), fptr);
  printf("%d  %s\n", secondf.id, secondf.name);
  fclose(fptr);
  return 0;
}
```

> - This program wrote two item records to a file.

> - To read just the second record, `fseek()` moved the file pointer <br />
    to `1*sizeof(item)` bytes from the start of the file.

> - For example, if you wanted to move the pointer to the fourth <br />
    record, then you seek `3*sizeof(item)` from the beginning of the <br />
    file (SEEK_SET).
