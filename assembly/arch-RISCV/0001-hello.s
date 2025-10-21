# Place variables and strings here.
.section .data

# The message to print.
message:
	.ascii "Hello, RISC-V Universe!\n"

# Compute the string length (current address - message).
length = . - message
	# Start of code section.
  .section .text

	# Tell the linker our entry point is called "_start".
  .globl _start

_start:
  addi a7, x0, 64        # SYS_write
  addi a0, x0, 1         # stdout
  la   a1, message       # load address of message
  addi a2, x0, length    # length
  ecall

  addi a7, x0, 93        # SYS_exit
  addi a0, x0, 0
  ecall
