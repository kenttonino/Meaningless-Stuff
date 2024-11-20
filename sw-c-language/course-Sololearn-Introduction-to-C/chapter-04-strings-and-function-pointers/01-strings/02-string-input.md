## $\textnormal{String Input}$

> - To retrieve a line of text or other string from the user, C <br />
    provides the `scanf()`, `gets()`, and `fgets()` functions.

> - You can use `scanf()` to read input according to the format <br />
    specifiers.

```c
// Example 1.
#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);

    printf("\nHi, %s. Your age is %d", first_name, age);

    return 0;
}
```

> - When `scanf()` is used to read a string, there is no need for <br />
    `&` to access the variable address because an array name acts <br />
    as a pointer.

> - `scanf()` stops reading input when it reaches a space.

> - To read a string with spaces, use the `gets()` function.

> - It reads input until a terminating newline is reached.

> - A safer alternative to `gets()` is `fgets()`, which reads up <br />
    to a specified number of characters.

> - This approach helps prevent a `buffer overflow`, which happens <br />
    when the string array isn't big enough for the typed text.

> - The `fgets()` arguments are the string name, the number of <br />
    characters to read, and a pointer to where you want to read the <br />
    the string from.

> - `stdin` means to read from the `standard input`, which is keyboard.

> - `fgets()` stored the newline character.

> - `fgets()` reads only `n-1` characters from `stdin` because there must <br />
    be room for '\0'.
