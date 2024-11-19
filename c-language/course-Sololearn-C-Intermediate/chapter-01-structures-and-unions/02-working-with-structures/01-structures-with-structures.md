## $\textnormal{Structures with Structures}$

> - The members of a structure may also be structures.

```c
// Example 1.
#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  float radius;
  point center;
} circle;

int main() {
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("Circle radius is %.2f, center is at (%d, %d)", c.radius, c.center.x, c.center.y);

    return 0;
}
```

> - Nested curly braces are used to initialize members that are structs.

> - The `dot operator` is used twice to access members of members.

> - A `struct definition` must appear before it can be used inside another struct.
