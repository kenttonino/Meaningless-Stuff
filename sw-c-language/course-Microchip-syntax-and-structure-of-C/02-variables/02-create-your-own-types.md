## Create Your Own Types

<br />

| Link |
| ---- |
| https://mu.microchip.com/syntax-and-structure-of-c/615246 |

<br />

> - Syntax:

```c
typedef ANSI_C_TYPE new_type_name;
typedef unsigned int unsigned16bit;
```

> - In professional firmware settings, engineers don't use <br />
    the ANSI standard variable types.

```c
// Used for unsgined ints and 16-bits.
typedef unsigned int uint16_t;
uint16_t x, y;
```
