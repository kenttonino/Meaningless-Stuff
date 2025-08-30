# RISC-V ISA Specification Documents

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/risc-v-specification?page=1

<br />

`RISC-V ISA`
#

> - It was defined while avoiding implementation details as much as possibble.
> - It should be read as the software-visible interface to a wide variety of implementation rather than as the design of a particular hardware artifact.

<br />

`RISC-V Instruction Set Manual Volume 1`
#

> - https://drive.google.com/file/d/1uviu1nH-tScFfgrovvFCrj7Omv8tFtkp/view
> - Covers the design of the base unprivileged instructions, including optional unprivileged ISA extensions.
> - Unprivileged instructions are those that are generally usable in all privilege modes in all privileged architectures, though behavior might vary depending on privilege mode and privilege architecture.

<br />

`RISC-V Instruction Set Manual Volume II`
#

> - https://drive.google.com/file/d/17GeetSnT5wW3xNuAHI95-SI1gPGd5sJ_/view
> - Provides the design of the first privileged architecture.

<br />
<br />
<br />



# RISC-V: A Modular ISA

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/risc-v-specification?page=2

<br />

`RISC-V`
#

> - A seasoned architecture designed to succeed where others have failed in the past.
> - Designed as a modular ISA, as opposed to the traditional incremental ISAs in commercial processors like the ARM Cortex family.
> - Modularity means that a RISC-V implementation is composed of a mandatory base ISA and a number of ISA extensions so that custom CPUs may be tailored to the needs of the application.
> - Any extension can be used or left out for a specific implementation.

<br />

`Other ISA`
#

> - Conversely, an incremental architecture requires an ISA to contain all the ISAs contained in the ISA it extends.
> - For example, the ARM Cortex-M4 instruction set contains all the instructions in the Cortex-M3 instruction set, and in turn, all those in Cortex-M0+ instruction set.
> - There is no way an ARM Cortex-M4 processor would only contain instructions from the M4 and M0+ instruction sets, skipping the instructions of the M3 instruction set in the middle.

<br />

`RV32IMAC ISA`
#

> - A popular RISC-V core for a number of embedded microcontrollers available today implements the RV32IMAC ISA.
> - The naming convention for custom RISC-V ISAs consists of the letters RV (for RISC-V) followed by the bit-width, and then a series of 1-letter identifiers for the base ISA and its extensions.
> - `RV32I`: A 32-bit CPU with the Base Integer ISA, this includes the absolutely necessary instructions for basic operation.
> - `M`: The Integer Multiplication and Division extension.
> - `A`: The Atomic Instruction extension.
> - `C`: The Compressed Instruction extension, this provides an alternative 16-bit encoding for a special subset of existing RV321 instructions, which are encoded in 32 bits.
