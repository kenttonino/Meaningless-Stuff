# About Assembly Language

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=1

<br />

...
#

> - You are about to become acquainted with the RISC-V assembly language syntax.
> - Computers execute programs stored as binary data in memory.
> - This data is encoded as machine code, which the CPU understands.
> - Some examples of RISC-V machine code instructions are **0x000012B7**.
> - **0x00028313**, **0x00500393**, and **0x00000E13**.
> - Machine code is not very human friendly.

<br />

...
#

> - Assembly language is distinct from machine language in that it is a human-readable representation of machine langauge.
> - All assembly language instructions and pseudoinstructions have an exact translation to their corresponding machine language instructions.

<br />

...
#

> - In terms of levels of abstraction, assembly language has the lowest abstraction from a programmer's perspective.
> - Even lower levels are found in machine code, logic states stored in memory, and electrical signals traversing the hardware.
> - Nevertheless, programmers usually start at assembly language as the lowest level of abstraction in computer programming.

<br />

...
#

> - Assembly code is at a lower level of abstraction with respect to high level programming language like C or Python.
> - Although most of the code is usually written in a high level language, sometimes one has no choice but to code directly in assembly language.

<br />
<br />
<br />



# Features

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=2

<br />

...
#

> - The RISC-V assembly language as a number of features that go hand in hand with te features of the RISC-V ISA.
> - Among the other features, we have the following:
>   - The language was designed with simplicity in mind.
>   - In general, binary operations like addition, **AND**, **XOR**, **multiplication**, and so on, specify 3 operands: 2 source registers with read access, and 1 result register with write access.
>   - Support of pseudoinstructions to ease the task of writing assembly code.
>   - Direct translation between assembly language and machine language.

<br />
<br />
<br />



# How the RISC-V Assembly Language Works

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=3

<br />

...
#

> - The syntax of the RISC-V assembly language can vary depending on the specific variant or extension of the architecture and the assembler being used (the program that reads a text file with assembly code, and produces machine code).
