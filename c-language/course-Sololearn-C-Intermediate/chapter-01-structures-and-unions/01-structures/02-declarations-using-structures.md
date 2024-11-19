## $\textnormal{Declarations \ Using \ Structures}$

```c
// Example 1.
#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    /* declare two variables */
    struct student s1;
    struct student s2;

    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name, "John Bighimer");

    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);

    return 0;
}
```

> - A `struct variable` is stored in a contiguous block of memory.

> - The `sizeof` operator must be used to get the number of bytes <br />
    needed for a struct, just as with the basic data types.

> - The `sprintf` function store the output on char `buffer` which <br />
    are specified in sprintf.

> - In C, `buffer` is referred to as a sequential section of memory <br />
    that is used to temporarily store some data that is being <br />
    tranferred from one place to another.

> - If you want to initialize a structure using curly braces after <br />
    declartion, you will also need to `type cast`, as in the statements.

```c
// Example 2.
struct human h1;
h1 =  (struct human) { 19, "Kent" };
```

> - You can use named member initialization when initializing a structure <br />
    to initialize corresponding members.
