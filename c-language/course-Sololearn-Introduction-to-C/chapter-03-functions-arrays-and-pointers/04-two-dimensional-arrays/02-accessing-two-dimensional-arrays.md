## $\textnormal{Accessing \ Two-Dimensional \ Arrays}$

```c
// Example 1.
#include <stdio.h>

int main() {
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };
    printf("Element 3 in row 2 is %d\n", a[1][2]); /* 20 */
    a[1][2] = 25;
    printf("Element 3 in row 2 is %d\n", a[1][2]); /* 25 */

	return 0;
}
```
