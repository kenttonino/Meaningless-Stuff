## $\textnormal{Binary File I/0}$

> - Writing only characters and strings to a file can become <br />
    tedious when you have an array or structure.

> - To write entire blocks of memory to a file, there are the <br />
    following binary functions.

> - Binary file mode options for the `fopen()` function are:

```plaintext
rb  : Open for reading (file must exist).
wb  : Open for writing (file need not exist).
ab  : Open for append (file need not exist).
rb+ : Open for reading and writing from beginning.
wb+ : Open for reading and writing, overwriting file.
ab+ : Open for reading and writing, appending to file.
```

> - `fwrite(ptr, item_size, num_items, fp)` writes `num_items` of <br />
    `item_size` size from pointer `ptr` to the file pointed to <br />
    by file pointer `fp`.

> - `fread(ptr, item_size, num_items, fp)` reads `num_items` items of <br />
    `item_size` size from the file pointed to by the file pointer `fp` <br />
    into memory pointed to by `ptr`.

> - `fclose(fp)` closes file opened with file `fp`, returning 0 if close <br />
    was successful `EOF` is returned if there is an error in closing.

> - Note: `feof(fp)` returns 0 when the end of the file stream has been <br />
    reached.

> - The following demonstrates writing to and reading from binary files.

```c
// Example 1.
#include <stdio.h>

int main() {
  FILE *fptr;
  int arr[10];
  int x[10];
  int k;

  /* generate array of numbers */
  for (k = 0; k < 10; k++)
    arr[k] = k;

  /* write array to file */
  fptr = fopen("datafile.bin", "wb");
  fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
  fclose(fptr);

  /* read array from file */
  fptr = fopen("datafile.bin", "rb");
  fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
  fclose(fptr);

  /* print array */
  for (k = 0; k < 10; k++)
    printf("%d", x[k]);
  return 0;
}
```

> - This program wrote an array of ints to a file, but an array of structures <br />
    could just as easily have been written to a file.

> - Notice that the item size and number of items were determined by using the <br />
    the size of an element and the size of the entire variable.

> - File extensions alone do not determine the format of data in a file, but <br />
    they are useful for indicating the type of data to expect.

> - For example, `a.txt` extension indicates a text file, `.bin` is for binary <br />
    data, `.csv` indicates comma separated values, and `.dat` is a data file.
