# Data Types

> - https://www.sololearn.com/en/learn/courses/c-plus-plus-introduction/lesson/5135219994?p=1

<br />

`int`
#

> - Used to store whole numbers (called **integers** in programming).

```cpp
#include <iostream>
using namespace std;

int main(void) {
    int points = 0001;
    cout << points;
    return 0;
}
```

<br />

`double or float`
#

> - Store decimals (or floating point numbers).
> - The term **floating point** refers to the fact that a varying number of digits can appear before and after the decimal point.
> - By default, decimal values are of type **double**.
> - The **float** uses less storage in the memory, but is not a precise as the **double** type.

```cpp
#include <iostream>
using namespace std;

int main(void) {
    double num1 = 3.14;
    float num2 = 3.14f;
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}
```

<br />
