## Description

> - Assembly language sample programs for RISC-V architecture.

<br />
<br />
<br />



## Setup

> - Install the `user-mode` emulation tools.

```sh
sudo apt install qemu-user gcc-riscv64-linux-gnu
```

> - How to run a program.

```sh
# Translate the assembly source code to a machine code.
# This will generate an object file.
riscv64-linux-gnu-as -o program.o program.s

# Combines one or more object files into a single executable program (ELF file).
riscv64-linux-gnu-ld -o program program.o

# Run the executable inside the QEMU user-mode emulator for 64-bit RISC-V programs.
qemu-riscv64 program
```
