### OS/ASYNC COMMON QUESTIONS
#

```plaintext
What functions in Node.js std library uses the
OS's async features?
    - Almost everything around networking for all OS's.
    - Some other stuff is OS specific.

How does this os async stuff fit into the event loop?
    - Tasks using the underlying OS are reflected in
      our "pendingOSTasks" array.
```
