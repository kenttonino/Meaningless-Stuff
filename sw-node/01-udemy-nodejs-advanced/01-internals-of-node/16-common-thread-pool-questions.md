### COMMON THREAD POOL QUESTIONS
#

```plaintext
Can we use the threadpool for javascript code or can only Node.js
functions use it?
    - We can write custom JS that uses the thread pool.

What functions in node std library use the threadpool?
    - All 'fs' module functions.
    - Some crypto stuff.
    - Depends on OS (Windows or Unix based).

How does this threadpool stuff fit into the event loop?
    - Tasks running in the threadpool are the "pendingOperations"
      in our code examples.
```
