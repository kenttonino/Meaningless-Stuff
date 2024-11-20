## $\textnormal{Booting the Kernel}$

> - There is no guarantee that the new kernel will boot.

> - As a safeguard, we want to make sure that there is <br />
    at least one good kernel installed and we can select <br />
    it from the boot menu.

> - By default, grub tries to boot the default kernel, <br />
    which is the newly installed kernel.

> - We change the default grub configuration file <br />
    `/etc/default/grub` to the boot menu, and pause for <br />

> - Please note that this option is specific to Ubuntu, <br />
    and other distributions might have a different way to <br />
    specify boot menu options.us to be able to select the <br />
    kernel to boot.

> - Increase the `GRUB_TIMEOUT` value to `10 seconds`, so <br />
    grub pauses in menu long enough to choose a kernel to boot:

```plaintext
- Uncomment GRUB_TIMEOUT and set it to 10: GRUB_TIMEOUT=10
- Comment out GRUB_TIMEOUT_STYLE=hidden
```

> - If the newly installed kernel fails to boot, it is nice <br />
    to be able to see the early messages to figure out why <br />
    the kernel failed to boot.

> - Enable printing early boot messages to vga using the <br />
    `earlyprintk=vga` kernel boot option:

```sh
GRUB_CMDLINE_LINUX="earlyprintk=vga"
```

> - Run `update-grub` to update the grub configuration in `/boot`.

```sh
sudo update-grub
```

> - Now, it’s time to restart the system.

> - Once the new kernel comes up, compare the saved `dmesg` <br />
    from the old kernel with the new one, and see if there <br />
    are any regressions.

> - If the newly installed kernel fails to boot, you will <br />
    have to boot a good kernel, and then investigate why <br />
    the new kernel failed to boot.

> - These steps are not specific to stable kernels.

> - You can check out `linux mainline` or `linux-next` and <br />
    follow the same recipe of generating a new configuration <br />
    from an `oldconfig`, build, and install the `mainline` <br />
    or `linux-next` kernels.
