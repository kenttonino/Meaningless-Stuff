## $\textnormal{Structures as Function Parameters}$

> - A function can have structure parameters that accept <br />
    arguments `by value` when a copy of the structure <br />
    variable is all that is needed.

> - For a function to change the actual values in a struct <br />
    variable, `pointer parameters` are required.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class);
void display_course(course class);

int main() {
    course cs2;
    update_course(&cs2);
    display_course(cs2);
    return 0;
}

void update_course(course *class) {
    strcpy(class->title, "C++ Fundamentals");
    class->id = 111;
    class->hours = 12.30;
}

void display_course(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}
```

> - As you can see, `update_course()` takes a pointer as the parameter, <br />
    while `display_course()` takes the structure by value.
