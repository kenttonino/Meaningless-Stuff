## Header File

<br />

| Link |
| ---- |
| Course: https://mu.microchip.com/syntax-and-structure-of-c/615248 |

<br />
<br />


## Header Files

> - Variables (and other program elements) can be declared <br />
    in a `header file`.

> - Usually ends in `.h`.

> - Included by using `#include` directive.

```c
#include "main.h"

void main(void) {
    a = 42;
    TakeOverTheWorld();
}
```

<br />
<br />



## `#include` Directive

> - Two ways to use `#include`.

```plaintext
#include "main.h"
    - Look in the project directory for the header file.

#include <math.h>
    - Will tell the compiler in the compiler search path.
```

> - Can be relative or absolute path.
