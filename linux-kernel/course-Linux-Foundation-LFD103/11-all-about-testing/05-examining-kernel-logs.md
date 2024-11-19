## $\textnormal{Examining Kernel Logs}$

> - Checking for regressions in `dmesg` is a good way <br />
    to identify problems, if any, introduced by the new code.

> - As a general rule, there should be no new `crit`, <br />
    `alert`, and `emerg` level messages in `dmesg`.

> - There should be no new err level messages.

> - Pay close attention to any new warn level messages <br />
    as well.

> - Please note that new warn messages are not as bad.

> - At times, new code adds new warning messages which <br />
    are just warnings.

```sh
dmesg -t -l emerg
dmesg -t -l crit
dmesg -t -l alert
dmesg -t -l err
dmesg -t -l warn
dmesg -t -k
dmesg -t
```

> - Are there any stack traces resulting from `WARN_ON` <br />
    in the `dmesg`? These are serious problems that require <br />
    further investigation.
