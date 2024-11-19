## $\textnormal{The include Directive}$

> - The `#include` directive is for including `hearder files` <br />
    in a program.

> - A header file declares a collection of functions and <br />
    macros for a `library`, a term that comes from the way <br />
    the collection of can be reused.

> - Some useful C libraries are:

```plaintext
stdio
    - Input/output functions, including printf and file operations.

stdlib
    - Memory management and other utilities.

string
    - Functions for handling strings.

errno
    - Errno global variable and error code macros.

math
    - Common mathematical functions.

time
    - Time/date utilities.
```

> - Corresponding header files for the libraries end with `.h` by <br />
    convention.

> - The `#include` directive expects brackets around the header <br />
    filename if the file should be searched for in the compiler <br />
    include paths.

> - A `user-defined header file` is also given the `.h` extension <br />
    , but is referred to with quotation marks, as in "myutil.h".

> - When quotation marks are used, the file is searched for in the <br />
    source code directory.

```c
// Example 1.
#include <stdio.h>
#include “myutil.h”
```
