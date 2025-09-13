## $\textnormal{Using \ Memory}$

> - The `scanf()` function places the value entered by the <br />
    user at the location, or `address`, of the variable.

> - This is accomplished by using the `&` symbol.


```c
// Example 1.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");

    scanf("%d", &num);

    printf("%d", num);

	return 0;
}
```

> - A memory address is given as a `hexadecimal` number.

> - `Hexadecimal`, or `hex`, is a base-16 number system that uses <br />
    digits 0 through 9 and letters A through F (16 characters) to <br />
    represent a group of four binary digits that can have a value <br />
    form 0 to 15.

> - It is much easier to read a hex number that is 8 characters <br />
    long for 32 bits of memory than to try to decipher 32 1s and 0s <br />
    in binary.

```c
// Example 1.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");

    scanf("%d", &num);

    printf("%d", num);

	return 0;
}
```

> - The address of a variable stays the same from the time it is <br />
    declared until the end of its scope.
