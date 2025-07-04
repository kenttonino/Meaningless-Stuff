## $\textnormal{Function Pointers as Arguments}$

> - Another way to use a function pointer is to pass it <br />
    as an argument to another function.

> - A function pointer used as an argument is sometimes <br />
    refered to as a `callback function` because the <br />
    receiving function "calls it back".

> - The `qsort()` function in the `stdlib.h` header file <br />
    uses this technique.

> - Quicksort is a widely used algorithm for sorting an array.

> - To implement the sort in your program, you need only include <br />
    the `stdlib.h` file and then write a compare function that <br />
    matches the declaration used in `qsort`:

```c
// Example 1.
void qsort(
    void *base,
    size_t num,
    size_t width,
    int (*compare)(const void *, const void *)
)
```

> - To breakdown the `qsort` declaration:

```plaintext
void *base
    - A void pointer to the array.

size_t_num
    - The number of elements in the array.

size_t_width
    - The size of an element

int (*compare)(const void *, const void*)
    - A function pointer which has two arguments and returns 0
      when the arguments have the same value, <0 when arg1
      comes before arg2, and >0 when arg1 comes after arg2.
```

```c
// Example 2.
#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *);

int main() {
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[ i ]);

    return 0;
}

int compare (const void *elem1, const void *elem2) {
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}
```

> - We used the function name in the `qsort` call because a function
    name acts as a pointer.
