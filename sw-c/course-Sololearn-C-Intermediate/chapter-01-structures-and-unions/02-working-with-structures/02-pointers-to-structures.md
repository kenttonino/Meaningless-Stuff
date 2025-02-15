## $\textnormal{Pointers to Structures}$

> - Just like pointers to variables, pointers to structures can also be defined.

```c
// Example 1.
// Defines a pointer to the myStruct structure.
struct myStruct *struct_ptr;

// Example 2.
// Stores the address of the structure variable struct_var in the pointer struct_ptr;
struct_ptr = &struct_var;

// Example 3.
// Accesses the value of the structure member struct_mem.
struct_ptr -> struct_mem;
```

```c
// Example 4.
#include <stdio.h>
#include <string.h>

// Student Structure Definition
struct student{
    char name[50];
    int number;
    int age;
};

// Struct pointer as a function parameter
void showStudentData(struct student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main() {
    // New Student Record Creation
    struct student st1;
    struct student st2;

    // Filling Student 1 Details
    strcpy(st1.name, "Krishna");
    st1.number = 5;
    st1.age = 21;

    // Filling Student 2 Details
    strcpy(st2.name, "Max");
    st2.number = 9;
    st2.age = 15;

    // Displaying Student 1 Details
    showStudentData(&st1);

    // Displaying Student 2 Details
    showStudentData(&st2);

    return 0;
}
```

> - The `->` operator allows to access members of the struct <br />
    through the pointer.

> - When a `typedef` has been used to name the struct, then a <br />
    pointer is declared using only the typedef name along with <br />
    `*` and the pointer name.
