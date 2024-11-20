## $\textnormal{Debugging Overview}$

> - Debugging is an art, and not a science.

> - There is no step-by-step procedure or a single <br />
    recipe for success when debugging a problem.

> - Asking the following questions can help to understand <br />
    and identify the nature of the problem and how best to <br />
    solve it:

```plaintext
- Is the problem easily reproducible?
- Is there a reproducer or test that can trigger the bug consistently?
- Are there any panic, or error, or debug messages in the dmesg when the bug is triggered?
- Is reproducing the problem time-sensitive?
```

> - Easily reproducible bugs with a test to trigger <br />
    make it easier to debug, identify the problem, <br />
    fix it and verify the fix.

> - Time-sensitive problems could be a result of race <br />
    conditions, and these are harder to debug and fix.
