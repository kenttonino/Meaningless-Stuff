# Place variables and strings here.
.section .data

# The message to print.
message:
	.ascii "Hello from RISC-V Universe!\n"

# Compute the string length (current address - message).
length = . - message
		# Start of code section.
    .section .text
		# Tell the linker our entry point is called "_main".
    .globl _main

_main:
    li a7, 64               # Syscall number for write
    li a0, 1                # File descriptor 1 = stdout
    la a1, message          # Load address of message into a1
    li a2, length           # Load message length into a2
    ecall                   # Make the system call

    li a7, 93               # Syscall number for exit
    li a0, 0                # Exit code 0 (success)
    ecall                   # Make the system call
