# Instruction Encoding

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-risc-v-instruction-set?page=1

<br />

The RV32I ISA specifies the following elements:
#

> - **1** 32-bit wide Program Counter Register.
> - **32** 32-bit wide Registers named x0 to x31.
> - **40** Unique 32-bit wide unprivileged instructions in six different formats (R, I, S, B, U, J) but with some recurring fields:
>   - A major opcode in the **7** least significant bits of the instruction, identifying the instruction.
>   - Source registers (rs1 always in bits **15 to 19**, rs2 in bits **20 to 24**).
>   - Destination register (rd in bits **7 to 11**) fields.
>   - Function fields, or minor opcodes, named **funct7** or **funct3** depending on their bit width. **Funct7** occupies the last **7** bits of the R type instruction and **func3** always occupies bits **12 to 14**.
>   - Immediate fields, which always tend to be towards the end (left side) of the instruction and are encoded differently depending on the instruction type.
> - **24** additional unique 32-bit wide privileged instructions in two formats (R and I).

![05-RV32I-instructions-format](./images/05-RV32I-RISCV-instruction-formats.png)

<br />

> - A key principle of RISC-V that stands out in this table is the fixed instruction length.
> - All instructions are encoded in 32 bits. No exceptions.

<br />

`Instruction Encodings with Explanations`
#

_R-Type_ <br />

> - Instructions are used for operations that involve two source registers and one destination register.
> - They typically include arithmetic and logic operations, such as addition, subtraction, bitwise operations, and comparisons.

<br />

_I-Type_ <br />

> - Instructions are used for operations that involve an immediate value (a constant) and a source register.
> - Common _I-Type_ instructions include load operations as well as arithmetic operations with immediate values (e.g. **add1** for "add immediate").

<br />

_S-Type_ <br />

> - Instructions are a subset of _I-Type_ instructions specifically used for storing data into memory.
> - They involve a source register, an immediate offset, and a base address register to specify the memory location where the data is to be stored.

<br />

_B-Type_ <br />

> - Instructions are used for conditional branching operations.
> - They compare two registers and, based on the result, determine whether to take a branch instruction or not.
> - Common _B-Type_ instructions include **beq** (branch equal) and **bne** (branch if not equal).
