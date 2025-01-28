## Data Types

> - `Data` are the raw material of computation.

> - We can define the characteristics of a data type to be:

```plaintext
- Set of values.
- A data representation, which is common to all these values.
- A set of operations which can be applied uniformly to all these values.
```

> - A `data type` in a programming language is a set of data <br />
    with values having predefined characteristics (Examples are, `integer`, <br />
    `character`, `floating point number`, `string`, etc.).

> - The memory inside a computer contains only zeros and ones.

> - Programming languages and compilers are providing the <br />
    facility of data types.

> - For example, integer takes 2 bytes, this says that, in <br />
    memory we are combining 2 bytes (16 bits) and calling it <br />
    as integer.

> - A data type decreases the coding effort.

> - At the top level, there are two types of data types:

| (1) System Defined Data Types |
| ----------------------------- |
| Also called as primitive data types. |
| Are data types which are defined by the system. |
| The common primitive data types in most programming languages <br /> are: `int`, `float`, `char`, `double`, `Boolean`, etc. |
| The number of bits allocated for each primitive data type <br /> depends on the programming languages, compiler, <br /> and operating system. |
| Below table are common system data types: |

| Data Type | Values | Representation | Operations |
| --------- | ------ | -------------- | ---------- |
| boolean | True, False | 1 Byte | \|\| && ! |
| char | ASCII ('A', 'B') | 2 Bytes | As for int |
| int | Negative, Zero, Positive Integers | 32 Bit Signed Integers | + - / *  < <= == >= > |
| float | Negative, Zero, Positive Floating-Point Numbers | IEEE 32 Bit Floating-Point | + - / *  < <= == >= > |
| String | "Hello, World!" | Array of Characters | strcpy() strlen |

<br />

| (2) User Defined Data Types |
| --------------------------- |
| If the system defined data types are not enough,  <br /> then most programming languages allows the users <br /> to define their own data types called <br /> `user defined data types`. |
| Good example of user defined data types are <br /> structures `struct` in C/C++, and classes in Java. |
| For example, we will combine many system defined <br /> data types and called it as user defined data type <br /> with name `newClass`. |
| This gives more flexibility and comfort in dealing <br /> with computer memory. |

```cpp
Class newClass {
    int intData;
    float floatData;
    string stringData;
    char charData;
    ...
}
```

<br />
<br />



## Basic Operations

| (1) Traversing |
| -------------- |
| Traversing means moving through a structure sequentially, <br /> node by node. |

| Traversing follows a general pattern that is: |
| --------------------------------------------- |
| `Begin` at the first node. |
| `Process` the current node. |
| `Move` to the next node. |
| `Repeat` until there are no more nodes. |

<br />

| (2) Searching |
| ------------- |
| Traversing and Searching go hand-in-hand because the <br /> common reason to traverse a structure is to <br /> some particular element value. |

| Various aways of dealing with a search operations: |
| -------------------------------------------------- |
| Return `True` if the item is in the structure, <br /> `False` if not. |
| Return `True` and also the location of the item, <br /> `False` if the item is not found. |
| Return the address of the item, `NULL` if not found. |

<br />

| (3) Insertion |
| ------------- |
| Insert one or more data elements into a structure. |
| Based on the requirement, new element can be at the <br /> beginning, end or at any given index. |

<br />

| (4) Deletion |
| ------------ |
| Removing an existing data element from a structure <br /> and re-organizing all of the elements that is left <br /> after the removal. |
