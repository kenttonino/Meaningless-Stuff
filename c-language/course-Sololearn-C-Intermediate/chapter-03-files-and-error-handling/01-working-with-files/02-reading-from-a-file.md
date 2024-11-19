## $\textnormal{Reading from a File}$

> - The `stdio.h` library also includes functions for <br />
    reading from an open file.

> - A file can be read one character at a time or an <br />
    entire string can be read into a character `buffer`, <br />
    which is typically a char array used for temporary <br />
    storage.

> - `fgetc(fp)` returns the next character from the file <br />
    pointed to by `fp`.

> - If the end of the file has been reached, then `EOF` is <br />
    returned.

> - `fgets(buff, n, fp)` reads `n-1` characters from the file <br />
    pointed to by `fp` and stores the string in buff.

> - A NULL character `\0` is appended as the last character in <br />
    `buff`.

> - If fgets encounters a newline characters or the end of file <br />
    before `n-1` characters is reached, then only the characters <br />
    up to that point are stored in buff.

> - `fscanf(fp, conversion_specifiers, vars)` reads characters <br />
    from the file pointed to by `fp` and assigns input to a list <br />
    of variable pointers `vars` using `conversion_specifiers`.

> - As with scanf, fscanf stops reading a string when a space or <br />
    newline is encountered.

> - The following program demonstrates reading from a file.

```c
// Example 1.
#include <stdio.h>

int main() {
    FILE *fptr;
    int stock;
    char buffer[200], item[10], c;
    float price;

    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */
    fptr = fopen("myfile.txt", "w");

    /* write to file */
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);
    fclose(fptr);

    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */
    fptr = fopen("myfile.txt", "r");
    fgets(buffer, 20, fptr); /* read a line */
    printf("%s\n", buffer);
    fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */
    printf("%d %s %4.2f\n", stock, item, price);
    while ((c = fgetc(fptr)) != EOF) /* read the rest of the file */
        printf("%c", c);
    fclose(fptr);
    return 0;
}
```

> - The `gets()` function reads up until the newline.

> - `fscanf()` reads data according to conversion specifiers.

> - And then the while loop reads one character at a time until the <br />
    end of file.
