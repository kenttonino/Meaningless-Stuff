## $\textnormal{Insecure Randomness Under the Hood}$

> - The function `generate_forgot_password_token` from <br />
    ![main.go](./main.go) the token generated is completely <br />
    predictable.

<br />
<br />



## $\textnormal{What is a Pseudo-Random Number Generator (PRNG)?}$

> - Unfortunately, it is impossible for a computer to produce <br />
    a truly random number because computers are deterministic.

> - Instead, when we need to generate a random number we use <br />
    functions that approximate randomness as well as is <br />
    possible with a deterministic machine (called `PRNGs`).

> - Types of PRNGs:

```plaintext
Statistical PRNGs
    - Highly predictable and therefore not suitable for
      functions that rely on randomness for security
      purposes.

Cryptographic PRNGs
    - Make prediction infeasible and are therefore appropriate
      for use in a security context.
```
