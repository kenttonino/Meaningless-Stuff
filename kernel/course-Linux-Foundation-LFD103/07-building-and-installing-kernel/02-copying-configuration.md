## $\textnormal{Copying the Configuration for Current Kernel from /boot}$

> - Starting out with the distribution configuration file is <br />
    the safest approach for the very first kernel install on <br />
    any system.

> - You can do so by copying the configuration for your <br />
    current kernel from `/proc/config.gz` or `/boot`.

> - As an example, I am running `Ubuntu 19.04` and <br />
    config-5.0.0-21-generic is the configuration I have in <br />
    `/boot` on my system.

> - Pick the latest configuration you have on your system <br />
    and copy that to `linux_stable/.config`.

> - In the following example, config-5.0.0-21-generic is the <br />
    latest kernel configuration.

```sh
# Check the list of configurations.
ls /boot
config-5.0.0-20-generic        memtest86+.bin
config-5.0.0-21-generic        memtest86+.elf
efi                            memtest86+_multiboot.bin
grub                           System.map-5.0.0-20-generic
initrd.img-5.0.0-20-generic    System.map-5.0.0-21-generic
initrd.img-5.0.0-21-generic    vmlinuz-5.0.0-20-generic
lost+found                     vmlinuz-5.0.0-21-generic

# Copy the configuration.
cp /boot/<config-5.0.0-21-generic> .config
```
