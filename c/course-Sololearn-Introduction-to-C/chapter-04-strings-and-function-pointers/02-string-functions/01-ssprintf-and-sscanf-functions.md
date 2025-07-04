## $\textnormal{ssprintf and sscanf Functions}$

> - A formatted string can be created with `sprintf()` function.

> - This is useful for building a string from other data types.

```c
// Example 1.
#include <stdio.h>
int main()
{
  char info[100];
  char dept[ ] = "HR";
  int emp = 75;
  sprintf(info, "The %s dept has %d employees.", dept, emp);
  printf("%s\n", info);

  return 0;
}
```

> - Another useful function is `sscanf()` for scanning a string for values.

> - The function reads values from a string and stores them at the <br />
    corresponding variable addresses.
