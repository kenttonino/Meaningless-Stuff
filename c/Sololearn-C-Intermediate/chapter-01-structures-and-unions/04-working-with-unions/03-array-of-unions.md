## $\textnormal{Array of Unions}$

> - An array of unions can store elements of any data type, <br />
    including `unions`.

> - With unions, it is important to keep in mind that only <br />
    one member of the union can store data for each array <br />
    element.

> - After declaring an array of unions, an element is accessible <br />
    with the index number.

> - The dot operator is then used to access members of the union.

```c
// Example 1.
#include <stdio.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};

int main() {
  union val nums[10];
  int k;

  /* create an array of ints */
  for (k = 0; k < 10; k++) {
    nums[k].int_num = k;
  }

  /* display array values */
  for (k = 0; k < 10; k++) {
    printf("%d  ", nums[k].int_num);
  }

  return 0;
}
```

> - An array is a data structures that stores collection values that <br />
    are all the same type.

> - Arrays of unions allow storing values of different types.
