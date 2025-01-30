## Abstract Data Type

> - An `Abstract Data Type` (ADT) is a set of objects together with <br />
    a set of operations.

> - Abstract data types are mathematical concepts; nowhere in an ADT's <br />
    definition is there any mention of how the set of operations is <br />
    implemented.

> - Objects such as lists, sets, and graphs, along with their operations, <br />
    can be viewed as ADT's, just as integersm, reals, and Booleans are <br />
    data types.

> - Integers, floats, and Booleans have operations associated with them <br />
    and so do ADTs.

> - ADT is a mathematical model with a collection of operations defined <br />
    on model.

> - An ADT should have a `contract` (or specification) that:

| (1) Declaration of Data |
| ----------------------- |
| Specifies the set of values of the abstract data type. |

<br />

| (2) Declaration of Operations |
| ----------------------------- |
| Specifies each operations of the abstract data type <br /> (i.e. specifies the operation's name, its parameter, types, results, etc. |

<br />

> - The noticeable behavior of an operation is the effect <br />
    of that operation as observed by the code.

> - Consider the example where there is an operation that <br />
    sorts a sequence of values.

> - The code that calls this operation will be able to <br />
    tell that the values has been sorted.

> - But cannot observe the detailed step-by-step by which <br />
    the operation achieves the result.

<br />
<br />



## Implementation

| An implementation of the Abstract Data Type requires: |
| ----------------------------------------------------- |
| - Choosing a data representation. |
| - Choosing a suitable algorithm for each of the operations. |

> - The chosen data representation must represent all possible <br />
    values of the Abstract Data type.

> - And the chosen algorithms must be consistent with the chosen <br />
    representation.

<br />
<br />



## Collection ADTs

| Examples |
| -------- |
| - A `stack` of plates in the dishwasher. |
| - A `queue` of customers in a restaurant. |
| - A `list` of places to visit. |
| - A `set` of items on a menu. |
| - A `table` of formulas for each problem. |
| - A family `tree`. |
| - A road `network`. |

> - This ADTs are know as `collections`.

> - A `collection` consists of zero or more elements (objects), <br />
    and is equipped with operations to add elements to the <br />
    collection, or to remove elements from the collection.

> - The elements of a given collection are typically all of the <br />
    same type.

> - Each kind of collection has its own unique properties. <br />

> - For example, the elements of stacks, queues, and lists have <br />
    a fixed order, while the elements of sets and maps have no <br />
    particular order.

> - As a result, each kind of collection is equipped with its <br />
    own characteristic operations.

> - A `stack` allows us to add and delete elements at the same <br />
    end only.

> - A `queue` allows us to add and delete elements at opposite <br />
    ends only.

> - A `list` allows us to add and remove elements at any given <br />
    location.

> - A set allows us simply to add and remove elements: its <br />
    elements have no particular order.

> - These collection ADTs can be represented by some data structures.

> - And some of the commonly used ADTs to represent collection <br />
    include: `Array`, `Linked List`, `Binary Trees`, and `Hash Tables`.

> - For example, `Array` is a sequential arrangement of data elements.

> - Thus, it can represent the stack by using the index associated <br />
    with each element.

> - Below are some example of `Data Structures`:

| (1) Array |
| --------- |
| It is a collection of items stored at the adjacent memory locations. |
| The idea is to store multiple objects of the same type together in <br /> one structure. |
| Thus, making it easier to get the location of each element (values <br /> or variables) by simply adding an offset to the initial value (i.e. <br /> the memory allocation of the first element of the array) . |
| It is a sequential arrangement of data elements paired with the <br /> index of the data element. |
| ![array-memory-allocation](./images/01-array-memory-allocation.png) |
| The image above is the visualization of a character array. |
| The index `0` denotes the first element of the array having the <br /> memory location of `500` and value of `H`. |

<br />

| (2) Linked List |
| --------------- |
| A `linked list` is a linear data structure, in which the elements <br /> are not stored at adjacent memory locations. |
| The elements in a linked list are linked using pointers. |
| Each data element contains a link to another element along with <br /> the data present in it. |

<br />

| (3) Binary Tree |
| --------------- |
| Binary Trees are hierarchical data structures. |
| Thus, there is a topmost node which is called the root node. |
| It is a data structure where each data element can be <br /> connected to maximum two other data elements and <br /> it starts with a root node. |

<br />

| (4) Hash Table |
| -------------- |
| A data structure which is made of arrays associated with <br /> each other using a hash function. |
| It retrieves values using keys rather than index from a <br /> data element. |

<br />

| (5) Stack |
| --------- |
| It is a data structure which follows only to specific <br /> order of operation. |
| LIFO (Last in First Out) or FILO (First in Last Out). |

<br />

| (6) Queue |
| --------- |
| It is similar to Stack but the the order of operation is <br /> only FIFO (First in First Out). |
