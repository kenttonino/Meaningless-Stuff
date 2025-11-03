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

> - These elements are combined to create RISC-V assembly programs, which are then assembled into machine code and executed by the processor.

<br />

`RISC-V Assembly Language Elements`
#

_Instructions_:
> - A set of basic operations, such as **arithmetic**, **load/store**, and **control flow**, that are executed by the processor.
> - In general, instructions consist of mnemonic (a short but descriptive instruction name) and a series of operands (the registers or data to operate upon).

_Registers_:
> - Processor-internal memory locations used to store intermediate results and control information.

_Labels_:
> - Symbolic names for memory locations that can be used as targets for branch and jumps instructions.

_Directives_:
> - Special commands used to control the behavior of the assembler, such as setting memory regions or defining constants.

_Macros_:
> - User-defined sequences of instructions that can be invoked with a single macro call.

_Pseudoinstructions_:
> - Synthetic instructions that are translated by the assembler into one or more real instructions, allowing for a higher-level, more concise representation of the code.

<br />
<br />
<br />



# Assembly Language Syntax

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=4

<br />

...
#

> - The RISC-V assembly language syntax follows the typical assembly language rules of other processors, supporting basic elements like instructions and labels, as well as directives and means to specify storage requirements.
> - In general, an assembly source file consists of a series of blocks of code, each specifying its memory section and storage requirements.
> - Up ahead, we will see what all the parts of an assembly program mean. For now, let’s skim through a Hello World example featured in the book The [RISC-V Reader](http://riscvbook.com/).
> - It contains a block of executable code in the text section and a block of data with two strings in the read-only data section.

```assembly
  .text                     # Directive: enter text section
  .align 2                  # Directive: align code to 2^2 bytes
  .globl main               # Directive: declare global symbol main

main:                       # label for start of main
  addi sp,sp,-16            # allocate stack frame
  sw ra,12(sp)              # save return address
  lui a0,%hi(string1)       # compute address of
  addi a0,a0,%lo(string1)   # string1
  lui a1,%hi(string2)       # compute address of
  addi a1,a1,%lo(string2)   # string2
  call printf               # call function printf
  lw ra,12(sp)              # restore return address
  addi sp,sp,16             # deallocate stack frame
  li a0,0                   # load return value 0
  ret                       # return

  .section .rodata          # Directive: enter read-only data section
  .balign 4                 # Directive: align data section to 4 bytes

string1:                    # label for first string
  .string "Hello, %s!\n"    # Directive: null-terminated string

string2:                    # label for second string
  .string "world"           # Directive: null-terminated string
```

<br />
<br />
<br />



# Assembler Directives

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=5

<br />

...
#

> - RISC-V assembler directives are non-CPU instructions that provide information to the assembler (the program that produces machine code from a text file), but are not executed as machine instructions.
> - They control the assembly process, specify data locations and provide information to linkers.
> - These are some of the most popular RISC-V assembler directives, but there are many more. Consult the RISC-V ISA manual or the [specific assembler documentation](https://github.com/riscv-non-isa/riscv-asm-manual/blob/lpad_hash/riscv-asm.md) for a complete list.

<br />

`Common RISC-V Assembler Directives`
#

_.align_:
> - Aligns the location counter to a specified power of 2 boundary.

_.section_:
> - Specifies the section of the output file where the following data should be placed.

_.byte_:
> - Defines an array of 8-bit values.

_.half_:
> - Defines an array of 16-bit values.

_.word_:
> - Defines an array of 32-bit values.

_.data_:
> - Specifies the start of the data section where initialized data is stored.

_.text_:
> - Specifies the start of the code section where instructions are stored.

_.globl_:
> - Declares a symbol as global and accessible from other files.

_.equ_:
> - Assigns a value to a symbol, useful for constants.

_.string_:
> - Defines a string of ASCII characters with a null terminator.

<br />
<br />
<br />



# Reminder: The RISC-V Instruction Set

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/hands-on-risc-v-assembly-language/risc-v-specific-assembly-language?page=6
> - Since we are about to see a few coding examples, it’s a good idea to have [“The RISC-V Instruction Set Manual Volume I: Unprivileged ISA”](https://drive.google.com/file/d/1uviu1nH-tScFfgrovvFCrj7Omv8tFtkp/view) handy in case you need to review some of the instructions in the code.
> - Also remember to have a quick reference document handy. Here are the links to the documents we recommended earlier:
>   - A [RISC-V Reference Card](https://github.com/jameslzhu/riscv-card/releases/download/latest/riscv-card.pdf), by James Zhu.
>   - The [RISC-V reference card](http://riscvbook.com/greencard-20181213.pdf) included in The [RISC-V Reader](http://riscvbook.com/).
