## $\textnormal{Switch \ Statement}$

> - The `switch` statement branches program control by <br />
    matching the result of an expression with a constant <br />
    case value.

```c
// Example 1.
switch (expression) {
  case val1:
    statements
  break;
  case val2:
    statements
  break;
  default:
    statements
}
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int num = 3;

    switch (num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Not 1, 2, or 3.\n");
    }
}
```

```c
// Example 2.
#include <stdio.h>

int main() {
    int num = 3;

    switch (num) {
        case 1:
        case 2:
        case 3:
            printf("One, Two, or Three.\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Four, Five, or Six.\n");
            break;
        default:
            printf("Greater than Six.\n");
    }
}
```
