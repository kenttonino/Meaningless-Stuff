## $\textnormal{Debug Options and Proactive Testing}$

> - As you are making changes to drivers and other areas <br />
    in the kernel, there are a few things to watch out for.

> - There are several configuration options to test for <br />
    locking imbalances and deadlocks.

> - It is important to remember to enable the `Lock Debugging` <br />
    and `CONFIG_KASAN` for memory leak detection.

> - We do not intend to cover debugging in depth in this <br />
    chapter, but we want you to start thinking about <br />
    debugging and configuration options that facilitate debugging.

> - Enabling the following configuration option is recommended <br />
    for testing your changes to the kernel:

```sh
CONFIG_KASAN
CONFIG_KMSAN
CONFIG_UBSAN
CONFIG_LOCKDEP
CONFIG_PROVE_LOCKING
CONFIG_LOCKUP_DETECTOR
```

> - I will leave you to play with these debug configuration <br />
    options and explore others.

> - Running `git grep -r DEBUG | grep Kconfig` can find all <br />
    supported debug configuration options.

```plaintext
LF Live Mentorship Series: https://events.linuxfoundation.org/lf-live-mentorship-series/
```
