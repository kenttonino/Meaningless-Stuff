## Description

> - Assembly language sample programs for RISC-V architecture.
> - I used only RISC-V 32 bit for this, since that's what I'm currently learning.

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
# riscv64-linux-gnu-as: Translate the assembly source code to a machine code.
# -march=rv32gc: Tells the assembler to use the full RV32 general purpose instruction set.
# -mabi=ilp32: Defines how data types (int, long, pointer) are sized.
# -o: Output the object file based on the source code.
riscv64-linux-gnu-as -march=rv32gc -mabi=ilp32 -o program.o program.s

# riscv64-linux-gnu-ld: Combines one or more object files into a single executable program (ELF file).
# -m elf32lriscv: Create a 32-bit little endian RISC-V ELF (Executable Linkable Format) file.
# -o: Output the executable file.
riscv64-linux-gnu-ld -m elf32lriscv -o program program.o

# Run the executable inside the QEMU user-mode emulator for 32-bit RISC-V programs.
qemu-riscv32 program
```
