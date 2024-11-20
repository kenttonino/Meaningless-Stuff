## $\textnormal{Predefined Macro Definitions}$

> - In addition to defining your own macros, there are <br />
    several standard `predefined macros` that are always <br />
    available in C program without requiring the `#define` <br />
    directive:

```plaintext
__DATE__
    - The current date as a string in the format "Mm dd yyyy".

__TIME__
    - The current time as a string in the format "hh:mm:ss".

__FILE__
    - The current filename as a string.

__LINE__
    - The current line number as an int value.

__STDC__
    - 1
```

```c
// Example 1.
#include <stdio.h>
#include <string.h>

int main() {
  char curr_time[10];
  char curr_date[12];
  int std_c;

  strcpy(curr_time, __TIME__);
  strcpy(curr_date, __DATE__);
  printf("%s %s\n", curr_time, curr_date);
  printf("This is line %d\n", __LINE__);
  std_c = __STDC__;
  printf("STDC is %d", std_c);

  return 0;
}
```
