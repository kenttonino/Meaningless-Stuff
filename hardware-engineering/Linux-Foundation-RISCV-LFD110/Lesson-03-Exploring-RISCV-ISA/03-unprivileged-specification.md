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
