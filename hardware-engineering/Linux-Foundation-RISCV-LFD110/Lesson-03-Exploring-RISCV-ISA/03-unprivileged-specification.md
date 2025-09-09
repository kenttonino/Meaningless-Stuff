# Inside the Unprivileged Specification

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/unprivileged-specification?page=1
> - Details items that are not related to machine mode (M-Mode) or to Supervisor Mode (S-Mode).
> - The unprivileged specification includes the base integer (I) ISA as well as extensions to that base, like float (F), double (D), compressed instructions (C), and many more.
> - The base instruction sets describe the instruction format, basic integer instructions, load and store instructions, and other fundamental details of the ISA.

<br />

We break the base ISAs into several variants:
#

> - RV32I: Integer 32-bit.
> - RV32E: A version of RV32I with fewer registers for embedded applications.
> - RV64I: Integer 64-bit.
> - RV128I: Integer 128-bit.

<br />

...
#

> - All these BASE ISAs either reduce or extend of the RV32I base instruction set.
> - As an example, RV64I widens the integer registers and the supported user address space to 64 bits.
> - This means that the LOAD and STORE instructions work a bit differently than in RV32I and the unprivileged specification contains the chapter explaining these differences.

<br />
<br />
<br />



# RV32I Base Integer ISA

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/unprivileged-specification?page=2
> - With only 40 instructions, the RV32I base integer ISA implements the absolutely necessary operations to achieve basic functionality with 32-bit integers (its 64-bit variant is RV64I).

<br />

This ISA, encoded in 32-bits, includes instructions for:
#

> - Addition
> - Substraction
> - Bitwise Logical Operations
> - Load and Store
> - Jumps
> - Branches

<br />

...
#

> - The Base Integer ISA also specifies the 32 CPU registers, which are all 32-bits wide, plus the program counter.
> - THe only special register is x0, which always reads 0, as implemented in many previous RISC ISAs.
> - Although all registers are available for general purpose, the application binary interface (ABI) specifies a purpose for each of them, according to its calling convention.
> - This means that some registers are expected to hold temporary or saved data, pointers, return addresses, and so on.
> - The RV32I register file, showing the hardware register names and their assigned functionality as specified in the RISC-V application binary interface, is presented in the table below.

<br />

![04-riscv-symbolic-register-name](./images/04-riscv-symbolic-register-name.png)

<br />
<br />
<br />



# Control and Status Registers (CSRs)

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/unprivileged-specification?page=3
