## $\textnormal{Installing the Kernel}$

> - Once the kernel compilation is complete, install the <br />
    new kernel.

```sh
su -c "make modules_install install"
```

> - The above command will install the new kernel and run <br />
    `update-grub` to add the new kernel to the grub menu.

> - Now it is time to reboot the system to boot the newly <br />
    installed kernel.

> - Now it is time to reboot the system to boot the newly <br />
    installed kernel.

> - Using the `-t` option allows us to generate dmesg logs <br />
    without the timestamps, and makes it easier to compare <br />
    the old and the new.

```sh
dmesg -t > dmesg_current
dmesg -t -k > dmesg_kernel
dmesg -t -l emerg > dmesg_current_emerg
dmesg -t -l alert > dmesg_current_alert
dmesg -t -l crit > dmesg_current_crit
dmesg -t -l err > dmesg_current_err
dmesg -t -l warn > dmesg_current_warn
dmesg -t -l info > dmesg_current_info
```

> - In general, `dmesg` should be clean, with no `emerg`, `alert`, <br />
    `crit`, and `err` level messages.

> - If you see any of these, it might indicate some hardware <br />
    and/or kernel problem.

> - If the `dmesg_current` is zero length, it is very likely <br />
    that secure boot is enabled on your system.

> - When secure boot is enabled, you won’t be able to boot <br />
    the newly installed kernel, as it is unsigned.

> - You can disable secure boot temporarily on startup with MOK manager.

> - Your system should already have `mokutil`.

> - Let's first make sure secure boot is indeed enabled:

```sh
mokutil --sb-state
```

> - If you see the following, you are all set to boot your <br />
    newly installed kernel:

```sh
SecureBoot disabled
Platform is in Setup Mode
```

> - If you see the following, disable secure boot temporarily <br />
    on startup with MOK manager:

```sh
SecureBoot enabled
SecureBoot validation is disabled in shim
```

> - Disable validation:

```sh
sudo mokutil --disable-validation
root password
mok password: 12345678
mok password: 12345678
sudo reboot
```

> - The machine will reboot in a blue screen, the MOK manager menu.

> - Type the number(s) shown on the screen: if it is 7, it is <br />
    the 7th character of the password.

> - So, keep 12345678.

> - The question to answer is Yes to disable secure boot. Reboot.

> - You’ll see on startup after a new message (top left) saying <br />
    `<<Booting in insecure mode>>`.

> - The machine will boot normally after and secure boot remains enabled.

> - This change is permanent, a clean install won't overwrite it.

> - To re-enable it (please note that you won't be able to boot <br />
    the kernels you build if you re-enable):

```sh
sudo mokutil --enable-validation
root password
mok password: 12345678
mok password: 12345678
sudo reboot
```

```plaintext
Reference: https://askubuntu.com/questions/1119734/how-to-replace-or-remove-kernel-with-signed-kernels
```
