## $\textnormal{Restart the System and Compare Messages}$

> - Now restart the system.

> - Once the new kernel comes up, compare the saved `dmesg` <br />
    from the old kernel with the new one, and see if there <br />
    are any regressions.

> - If the newly installed kernel fails to boot, you will <br />
    have to boot a good kernel, and then investigate why <br />
    the new kernel failed to boot.

> - Run `Kernel Selftests` and check the results.

```sh
# Running as root could reboot your system. Run as normal user.
make kselftest
```
