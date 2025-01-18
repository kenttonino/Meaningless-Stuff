## Analysis of Algorithm

> - We will now discuss how to compare algorithms mainly in terms <br />
    of running time, memory, etc.

> - In computer science, multiple algorithms are available for <br />
    solving the same problem, for example, a sorting problem has <br />
    has many algorithms like insertion sort, bubble sort, quick sort, etc.

> - Thus by algorithm analysis, we determine which algorithm is <br />
    most efficient in terms of time and space consumed.

<br />
<br />



## Running Time Analysis

> - `Running time analysis` is the process of determining how processing <br />
    time increases as the size of the problem increases.

> - Input size is the number of elements in the input, and depending on <br />
    the problem type, the input may be of different types.

| Common Types of Inputs |
| ---------------------- |
| Size of an Array |
| Polynomial Degree |
| Number of Elements in a Matrix |
| Vertices and Edges in a Graph |

<br />
<br />



## Rate of Growth

> - The rate of growth is the rate at which the running time increases <br />
    as a function of input.

> - Let's say we have this polynomial function.

$f(x) = n^2 + 8n + 2$

> - As you can see on the equation above, the polynomial function has <br />
    the highest order of `2`.

> - Thus, we can remove the low order terms because as the number of <br />
    inputs grow larger, the only significant variable will be $n^2$ <br />
    and the $n^2$ will be the rate of growth of this function.

<br />
<br />



## Commonly Used Rates of Growth

| Time Complexity | Name | Example |
| --------------- | ---- | ------- |
| $1$ | Constant | Adding an element to the front of a linked list. |
| $logn$ | Logarithmic | Finding an element in a sorted array. |
| $n$ | Linear | Finding an element in an unsorted array. |
| $nlogn$ | Linear Logarithmic | Sorting $n$ items by `divide-and-conquer` (Merge Sort). |
| $n^2$ | Quadratic | Shortest path between two nodes in graph. |
| $n^3$ | Cubic | Matrix multiplication. |
| $2^n$ | Exponential | The towers of hanoi problem. |

<br />
<br />



## Types of Analysis

> - To analyze a given algorithm, we need to know which inputs <br />
    the algorithm takes less time and with which inputs the <br />
    algorithm takes a long time.

> - An algorithm can be represented in the form of an expression.

> - That means, we can represent the algorithms with multiple <br />
    expressions: one for the case where it takes less time and <br />
    another for the case where it takes more time.
