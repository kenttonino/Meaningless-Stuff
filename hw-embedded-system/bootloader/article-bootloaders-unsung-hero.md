## Bootloaders: The Unsung Heroes of Your Device

<br />

| Reference |
| ---- |
| https://www.linkedin.com/pulse/bootloaders-unsung-heroes-your-devices-morning-routine-peshkar-mfkmf/?trackingId=Y4MepgkqxVl1pAnm0t16nA%3D%3D |

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
