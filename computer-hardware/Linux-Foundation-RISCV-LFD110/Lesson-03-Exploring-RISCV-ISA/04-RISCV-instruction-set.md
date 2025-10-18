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

<br />

_U-Type_ <br />

> - Instructions are used for setting the upper bits of a register to a constant value, which is often used for initializing pointers or addresses.
> - The _U-Type_ instructions include **lui** (load upper immediate) and **auipc** (add upper immediate to PC).

<br />

_J-Type_ <br />

> - Instructions are used for unconditional jump operations.
> - The jump instruction transfers control to a specified target address, like the **jal** (jump and link) instruction used for subroutine calls.

<br />
<br />
<br />



# Immediate and Address

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-risc-v-instruction-set?page=2
> - Other than **opcodes** and **registers**, any instruction encoding other than **R-Type** may contain immediates, that is a piece of data encoded directly in the instruction, rather than in memory or in a register.
> - This data can  represent either constants, to be used for example in arithmetic operations, or as memory addresses or offsets.

<br />

...
#

> - Different handling of immediates is the exact characteristic that defines the instruction types, but all of them tend to encode the immediates in similar positions in order to simplify the implementation of the hardware immeadiate decoder.
> - All immediates decode to **32-bit** wide values, but encoding varies by instruction.

<br />
<br />
<br />



# Instructions in Assembly Language

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-risc-v-instruction-set?page=3
> - Instruction mnemonics are used in RISC-V assembly language to represent specific instructions in a more human-readable from.
> - A mnemonic is a short string of letters that represents a specific instruction.

<br />

...
#

> - For example, in the instruction `add x1, x2, x3`, **add** is the mnemonic that represents the add instruction.
> - Functionality, that instruction means _"add the contents of x2 with contents of x3, and store the result in x1"_.

<br />

...
#

> - When an assembler encounters a mnemonic in the source code, it will use that mnemonic to translate the instruction into the corresponding machine code representation of the instruction, along with the encoding of the operands.

<br />

...
#

> - For example, the instruction `add x1, x2, x3` is translated by the assembler by the machine code instruction `0x003100B3`.
> - This long hexadecimal number can be extended to binary: `0000 0000 0011 0001 0000 0000 1011 0011`.
> - Which in turn can be represented as an **R-Type** instruction with the following fields:

![06-add-instruction](./images/06-add-instruction.png)

<br />

As shown above, these are the meanings of the bit fields in the encoded instruction:
#

**funct7**: _0000000_ <br />
**rs2**: _00011_: _x3_ <br />
**rs1**: _00010_: _x2_ <br />
**funct3**: _000_ <br />
**rd**: _00001_: _x1_ <br />
**opcode**: _0110011_: _add_ <br />

> - Keep in mind that mnemonics are used both instructions and pseudoinstructions, which the assembler converts to machine instuctions.

<br />
<br />
<br />



# The RISC-V Instruction Set Reference Documents

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-risc-v-instruction-set?page=4
> - The instruction set is divided throughout the RISC-V base ISAs and extensions.
> - Therefore, it is a good idea to have [The RISC-V Instruction Set Manual Volume 1: Unprivileged ISA](https://drive.google.com/file/d/1uviu1nH-tScFfgrovvFCrj7Omv8tFtkp/view?usp=drive_link) handy in case you need to review some of the instructions in detail.
> - However, this document is very thorough and specifc, so a simpler alternative like a quick reference document may be more convenient.

[A RISC-V Reference Card](https://github.com/jameslzhu/riscv-card/releases/download/latest/riscv-card.pdf) <br />
> - Help to get familiar with the instructions RV32I and many extensions.

[The RISC-V Reference Card](http://riscvbook.com/greencard-20181213.pdf) <br />
> - Included in the previously mentioned book titled [The RISC-V Reader](https://drive.google.com/file/d/1uviu1nH-tScFfgrovvFCrj7Omv8tFtkp/view?pli=1), by David Patterson and Andrew Waterman.
