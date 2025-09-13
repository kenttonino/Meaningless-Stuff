## $\textnormal{Preprocessor Directives}$

> - The C `preprocessor` uses the `# directives` to make <br />
    substitutions in program source code before compilation.

> - For example, the line `#include <stdio.h>` is replaced <br />
    by the contents of the `stdio.h` header file before a <br />
    program is compiled.

> - Preprocessor directives and their uses:

```plaintext
#include
    - Including header files.

#define
#undef
    - Defining and undefined macros.

#ifdef
#ifndef
#if
#else
#elif
#endif
    - Conditional compilation.

#pragma
    - Implementation and compiler specific.

#error
#warning
    - Output an error or warning message an error halts compilation.
```
