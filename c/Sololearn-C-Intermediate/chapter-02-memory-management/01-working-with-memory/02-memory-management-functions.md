## $\textnormal{Memory Management Functions}$

> - The `stdlib.h` library includes memory management functions.

```plaintext
malloc(bytes)
    - Returns a pointer to a contiguous block of memory
      that is of size bytes.

calloc(num_items, item_size)
    - Returns a pointer to a contiguous block of memory.
    - Typically used for arrays, structures, and other derived
      data types.
    - The allocated memory is initialized to 0.

realloc(ptr, bytes)
    - Resizes the memory pointed to by "ptr" to size "bytes".
    - The newly allocated memory is not initialized.

free(ptr)
    - Releases the block of memory pointed to by "ptr".
    - When you no longer need a block of allocated memory, use
      the function free() to make the block available to be
      allocated again.
```
