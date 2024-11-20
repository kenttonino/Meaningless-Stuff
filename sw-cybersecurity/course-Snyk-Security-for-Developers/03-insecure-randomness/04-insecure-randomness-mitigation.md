## $\textnormal{Insecure Randomness Mitigation}$

> - If you do need to generate your own tokens, <br />
    ensure that the underlying PRNG is cryptographically secure.

<br />
<br />



## $\textnormal{What to Use and What Not to Use}$

> - Recommended:

```plaintext
- UUID package, specifically the v4 function.
- If you need to generate a cryptographically secure
  number within a range, use the random-number-csprng package
- The built-in crypto package called randomBytes()
```

> - Not recommended:

```plaintext
- Math.random()
- The uuid package using anything other than the v4() function.
```

> - For v4, there are 5.3 x 10^36 unique UUIDs.

> - As a rule of thumb, it's best to use the data in a format
    that is as raw as possible.

<br />
<br />



## $\textnormal{Mitigating the Vulnerable Code Snippet}$

```typescript
function generateForgotPasswordToken() {
    const { v4: uuidv4 } = require('uuid');
    return uuidv4();
}
```
