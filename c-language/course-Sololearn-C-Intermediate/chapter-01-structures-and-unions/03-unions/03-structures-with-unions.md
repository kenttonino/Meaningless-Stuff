## $\textnormal{Structures With Unions}$

> - Unions are often within structures because a structure can <br />
    have a member to keep track of which union member stores <br />
    a value.

> - In the program below, a vehicle struct uses either a vehicle <br />
    identification number (VIN) or an assigned id, but not both.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

typedef struct {
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
    int id_num;
    char VIN[20];
  } id;
} vehicle;

int main() {
  vehicle car1;
  strcpy(car1.make, "Ford");
  car1.model_year = 2017;
  car1.id_type = 0;
  car1.id.id_num = 123098;

  printf("Car %s, %d", car1.make, car1.model_year);

  return 0;
}
```

> - Note that the union was declared inside the structure.

> - When doing this, a `union name` was required at the of the <br />
    declaration.

> - A union with a union tag could have been declared outside the <br />
    structure, but with such a specific use, the union within the <br />
    struct provides easier to understand the code.

> - Note that also the `dot operator` is used twice to access union <br />
    members of struct members.

> - The `id_type` keeps track of which union member stores a value.

> - A union can also contain a structure.
