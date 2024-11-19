## $\textnormal{Converting a String to a Number}$

> - Converting a string number characters to a numeric value <br />
    is a common task in C programming and is often used to <br />
    prevent a run-time error.

> - Reading a string is less error-prune than expecting a numeric <br />
    value, only to have the user accidentally type an "o" rather <br />
    than a "0" (zero).

> - The `stdio.h` library contains the following functions for <br />
    converting a string to a number.

```c
int atoi(str)
    - Stands for ASCII to integer.
    - Converts to str to the equivalent int value.
    - 0 is returned if the first character is not a number or no
      numbers are encountered.

double atof(str)
    - Stands for ASCII to float.
    - Converts to str to the equivalent double value.
    - 0.0 is returned if the first character is not a number or no
      numbers are encountered.

long int atol(str)
    - Stands for ASCII to long int.
    - Converts str to the equivalent long integer value.
    - 0 is returned if the first character is not a number or no
      numbers are encountered.
```

```c
// Example 1.
#include <stdio.h>
int main()
{
    char input[10 ];
    int num;


    printf("Enter a number: ");
    gets(input);
    num = atoi(input);

    printf("You entered %d", num);

    return 0;
}
```

> - Note, that `atoi()` lacks error handling, and it is recommended to use <br />
    `strtol()` if you want to make sure that proper error handling is done.
