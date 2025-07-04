## $\textnormal{Decode and Analyze the Panic Message}$

> - Panic messages can be decoded using the `decode_stacktrace.sh< tool. Please refer to xtagstartza href="https://lwn.net/Articles/592724/" target="_blank" style="color:#0099cc">decode_stacktrace: make stack dump output useful again` for details on how to use the tool.

```plaintext
https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/tree/scripts/decode_stacktrace.sh
```

```sh
Usage:
      scripts/decode_stacktrace.sh -r <release> | <vmlinux> [base path] [modules path]

Save (cut and paste) the panic trace in the dmesg between the two following lines of text into a .txt file.

------------[ cut here ]------------
---[ end trace …. ]---
```

> - Run this tool in your kernel repo.

> - You will have to supply the `[base path]`, which is the root <br />
    of the git repo where the `vmlinux` resides if it is different <br />
    from the location the tool is run from.

> - If the panic is in a dynamically kernel module, you will have <br />
    to pass in the `[modules path]` where the modules reside.

```sh
scripts/decode_stacktrace.sh ./vmlinux < panic_trace.txt
```

> - Reading code:

```plaintext
- It goes without saying that reading code and
  understanding the call trace leading up to the
  failure is an essential first step to debugging
  and finding a suitable fix.
```
