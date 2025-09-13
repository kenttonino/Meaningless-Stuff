## $textnormal{Strings}$

> - A `string` in C is an array of characters that ends with <br />
    `NULL character (\0)`.

> - A string declaration can be made in several ways.

```c
// Example 1.
char str_name[str_len] = "string";
```

> - When you provide a `string literal` to initialize the string <br />
    the compiler automatically adds a NULL character '\0' to the <br />
    char array.

> - For this reason, you must declar the array size to be at <br />
    atleast one character longer than the expected string length.

> - The statements below creates strings that include the NULL <br />
    character.

> - If the declaration does not include a char array size, then <br />
    it will be calculated based on the length of the string in <br />
    the initialization plus one for '\0'.

```c
// Example 2.
#include <stdio.h>

int main() {
    char str1[6] = "hello";
    char str2[ ] = "world";  /* size 6 */
    printf("str1 is: %s, str2 is: %s", str1, str2);

    return 0;
}
```

> - The NULL character must be added explicitly.

> - Note that the `characters` are enclosed in single quotation marks.

> - As with any array, the name of a string acts as a `pointer`.

> - A string literal is a text enclosed in double quotation marks.

> - A character, such as 'b', is indicated by single quotation marks <br />
    and cannot be treated as a string.

> - A string pointer declaration such as char `*str  = "stuff";`, is <br />
    considered a constant and cannot be changed from its initial value.

> - To safely and conveniently operate with strings, you can use the <br />
    Standard Library string functions shown below.

```plaintext
strlen()    : Get length of a string.
strcat()    : Merge two strings.
strcpy()    : Copy one string to another.
strlwr()    : Convert string to lower case.
strupr()    : Convert string to upper case.
strrev()    : Reverse string.
strcmp()    : Compare two strings.
```
