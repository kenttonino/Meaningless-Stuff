## Bootloaders: The Unsung Heroes of Your Device

<br />

| Reference |
| --------- |
| [LinkedIn: Bootloaders - The Unsung Heroes of Your Device](https://www.linkedin.com/pulse/bootloaders-unsung-heroes-your-devices-morning-routine-peshkar-mfkmf/?trackingId=Y4MepgkqxVl1pAnm0t16nA%3D%3D) |

<br />
<br />



## What Even is a Bootloader?

> - When you hit the power button on your computer and milliseconds before <br />
    that delightful boot screen logo appears, an unsung hero is hard at <br />
    work: `bootloader`.

> - `Bootloaders` whip up everything your operating system needs to wake <br />
    up and function.

> - `Bootloader` is a small but very powerful program that runs before your <br />
    operating system kicks in.

> - It `load` and `initialize` the operating system.

> - Without `bootloaders`, your operating system would not know where to start.

> - Bootloaders are firmware programs that live in the memory of your <br />
    device, usually stored within the `ROM` or `flash memory`.

> - These bootloaders usually do the following tasks:

```plaintext
- Power-on self-tests (POST): check if everything in your hardware is
  working as it should.

- Load the kernel: That is your OS's heart.

- Give control: Once the kernel is loaded, it is their cue to step
  aside and give room for the OS.
```

<br />
<br />



## The Stages of Bootloader

> - `Stage 1: Primary Bootloader`:

```plaintext
This is the first code executed when you power on your device. Its
main goals are:
    a. Hardware Initialization:
        - It tests that the CPU, RAM, and storage are operational or functional.

    b. Locate the Secondary Bootloader:
        - Like a scout searching for the main forces, it locates and loads the next stage.
```

> - `Stage 2: Secondary Bootloader`:

```plaintext
Once it is loaded, the secondary bootloader takes over. This
stage includes:
    a. Hardware Abstraction
        - It becomes more specific about hardware configuration,
          so that the kernel can understand the device.

    b. Kernel Loading
        - It locates the operating system kernel in storage
          and loads it into memory.

    c. Security Checks
        - Ensures the kernel is legitimate and hasn't been tampered with.
```

> - `Stage 3: Handing Off to the Kernel`:

```plaintext
The last act of the bootloader is to hand over control to the
OS kernel. This includes:
    - Passing essential parameters to the kernel.
    - Jumping to the kernel's entry point to let it take over.
```

<br />
<br />



## Steps in the Boot Process

> - `Power-On and POST`:

```plaintext
- When you press the power button, the device powers up and
  runs firmware Power-On Self-Tests (POST).

- If POST detects hardware issues, this process halts, and
  you're likely to see an error message or hear a series
  of ominous beeps.
```

> - `Finding the Bootloader`:

```plaintext
- The firmware searches for the primary bootloader in a
  predefined location, typically in flash memory.
```

> - `Primary Bootloader Execution`:

```plaintext
- The primary bootloader initializes basic hardware and
  fetches the secondary bootloader.
```

> - `Secondary Bootloader Execution`:

```plaintext
- The seconary bootloader configures advanced hardware settings
  and ensures the kernel is ready to take charge.
```

> - `Loading the Kernel`:

```plaintext
- The bootloader loads the operating system kernel into memory.

- If you are lucky there's no kernel panic.
```

> - `Kernel Takes Over`:

```plaintext
- It does its job and passes on control, where it is taken up
  by the kernel to handle all user interfaces, processes, and
  all other things you relate with when using a device.
```

<br />
<br />



## Bootloader Features

> - Capabilities:

```plaintext
Dual Boot
    - Want to run both Linux and Windows? Your bootloader covers you.
    - Popular bootloaders like GRUB allow selecting which OS to load
      at boot time.

Recovery Mode
    - Most devices have a recovery bootloader that lets you run diagnostics,
      updates, or even a full system reset.

Customization
    - Unlocking and modifying bootloaders is a favourite pastime of tech
      enthusiasts.
    - It is also the method by which most people flash custom ROMs onto
      Android devices.
```

<br />
<br />



## A Tour of Some Popular Bootloaders

> - Famous bootloaders:

```plaihtext
GRUB (GNU GRUB)
    - Flexible, supports multiple OS installations, and has a CLI for
      troubleshooting.

U-Boot (Das U-Boot)
    - Designed for embedded systems,

LILO (Linux Loader)
    - Though largely replaced by GRUB, LILO was once the go-to choice of Linux users.

Android Bootloader
    - Most android devices have a bootloader that's either locked or unlocked.
    - Unlocking it lets you root your device.
```

<br />
<br />



## Common Bootloader Issues

```plaintext
Boot Loops
    - Sample are the infinite loading screen, that's called boot loop.

Kernel Panic
    - When the kernel doesn't like something, it throws a fit called a kernel panic.

Corrupted Bootloader
    - If the bootloader gets corrupted, then you have big trouble.
    - Usually necessitates using recovery tools.
```

<br />
<br />



## Resources

| Links |
| --------- |
| [GRUB](https://www.gnu.org/software/grub/manual/grub/) |
| [U-Boot](https://docs.u-boot.org/en/latest/) |
| [Linux/86](https://www.kernel.org/doc/html/v5.6/x86/boot.html) |
| [Android Bootloader](https://source.android.com/docs/core/architecture/bootloader) |
