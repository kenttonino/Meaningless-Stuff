## $\textnormal{Exception Handling}$

> - Central to good programming practices is using error <br />
    handling techniques.

> - Even the most solid coding skills may not keep a program <br />
    from crashing should you forget to include exception handling.

> - An `exception` is any situation that causes your program <br />
    to stop normal executaion.

> - `Exception handling`, also called `error handling`, is an <br />
    approach to processing runtime errors.

> - C does not explicitly support exception handling, but there <br />
    are ways to manage errors.

```plaintext
* Write code to prevent the errors in the first place. You cannot
  control user input, but you can check to be sure that the user
  entered valid input. When performing division, take the extra
  step to ensure that division by 0 won't occur.

* Use the exit statement to gracefully end program execution. You
  may not be able to control if a file is available for reading,
  but you don't need to allow the problem to crash your program.
```

> - Use `errno`, `perror()`, and `strerror()` to identify errors <br />
    through error codes.
