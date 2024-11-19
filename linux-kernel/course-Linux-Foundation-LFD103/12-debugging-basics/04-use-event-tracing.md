## $\textnormal{Use Event Tracing to Debug}$

> - As you debug and analyze bugs, you might find event <br />
    tracing useful.

> - You don't have to recompile, and you can enable events <br />
    on a running system, which is a plus.

> - Root access is necessary to access the `/sys/kernel/debug` <br />
    directory and enable events.

```plaintext
Event Tracing: https://www.kernel.org/doc/html/latest/trace/events.html
```

> - An example usage is if you are debugging a networking <br />
    problem, you can enable available events for that area.

> - You can read up on how to use event tracing to get insight <br />
    into the system.

> - The file `/sys/kernel/debug/tracing/available_events` lists <br />
    all the events you can enable.

> - You will see several `directories:sched`, `skb` and many <br />
    others in the `/sys/kernel/debug/tracing/events` directory.

> - You will see a file called `enable` under each of these <br />
    directories and in the `/sys/kernel/debug/tracing/events`.

> - These directories correspond to kernel areas and trace <br />
    events they support.

> - These events can be enabled at runtime to get insight into <br />
    system activity.

> - If you want to enable all skb events:

```sh
Enable all events:
      cd /sys/kernel/debug/tracing/events
      echo 1 > enable

Enable the skb events:
      cd /sys/kernel/debug/tracing/events/skb
      echo 1 > enable
```

> - Before you run your reproducer, enable areas of interest <br />
    one at a time.

> - You can determine areas of interest based on the call trace.

> - Run the reproducer.

> - You can find the event traces in `/sys/kernel/debug/tracing/trace`.

> - A few debugging tips:

```plaintext
- Adding additional debug messages (pr_debug or dev_debug)
  is a good way to gather information on a bug.

- However, avoid adding additional messages and enabling
  e`vent tracing when debugging a time-sensitive problem,
  as it can change the timing and could make it harder
  to reproduce the problem.
```

> - We will leave you with additional resources to continue <br />
    your self study on learning to `hunt bugs`, `bisecting a bug`, <br />
    learn about debug configuration options in the kernel <br />
    config file, and how to use `dynamic debugging`.

```plaintext
Hunt Bugs: https://www.kernel.org/doc/html/latest/admin-guide/bug-hunting.html
Bisecting Bugs: https://www.kernel.org/doc/html/latest/admin-guide/bug-bisect.html
Dynamic Debugging: https://www.kernel.org/doc/html/latest/admin-guide/dynamic-debug-howto.html
```

> - Another great resource for looking at the history of <br />
    changes made to source files is `Contributors to the Linux Kernel`.

```plaintext
Contributors to the Linux Kernel
    https://cregit.linuxsources.org/

```

> - Please refer to `Who Made That Change and When: Using Cregit for Debugging`.

```plaintext
Using Cregit for Debugging
    http://www.gonehiking.org/ShuahLinuxBlogs/blog/2018/10/18/who-made-that-change-and-when-using-cregit-for-debugging/
```
