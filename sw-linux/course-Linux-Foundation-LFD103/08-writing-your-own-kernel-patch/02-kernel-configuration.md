## $\textnormal{Kernel Configuration}$

> - Let's work with the mainline kernel to create your first patch.

> - By this time, if you completed the exercises from the <br />
    previous chapters, you should already have the mainline <br />
    kernel running on your system.

> - While doing that, I asked you to copy the distribution <br />
    configuration file to generate the kernel configuration.

> - Now, let's talk about the kernel configuration.

> - The Linux kernel is completely configurable.

> - Drivers can be configured to be installed and completely <br />
    disabled. Here are three options for driver installation:

```plaintext
- Disabled
- Built into the kernel ("vmlinux" image) to be loaded at boot time.
- Built as a module to be loaded as needed using "modprobe".
```

> - It is a good idea to configure drivers as modules, to <br />
    avoid large kernel images.

> - Modules (`.ko` files) can be loaded when the kernel <br />
    detects hardware that matches the driver.

> - Building drivers as modules allows them to be loaded on <br />
    demand, instead of keeping them around in the kernel image <br />
    even when the hardware is either not being used, or not <br />
    even present on the system.

> - We talked about generating the new configuration with the <br />
    old configuration as the starting point.

> - New releases often introduce new configuration variables <br />
    and, in some cases, rename the configuration symbols.

> - The latter causes problems, and `make oldconfig` might not <br />
    generate a new working kernel.

> - Run `make listnewconfig` after copying the configuration <br />
    from `/boot` to the `.config` file, to see a list of new <br />
    configuration symbols.

> - `Kconfig make config` is a good source about `Kconfig` and <br />
    `make config`.

> - Please refer to the `Kernel Build System` to understand <br />
    the kernel build framework and the kernel makefiles.

```plaintext
Kconfig make config: https://www.kernel.org/doc/html/latest/kbuild/kconfig.html
Kernel Build System: https://www.kernel.org/doc/html/latest/kbuild/index.html
```
