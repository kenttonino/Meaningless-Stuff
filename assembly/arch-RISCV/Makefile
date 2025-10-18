0001:
	riscv64-linux-gnu-as -march=rv32i -mabi=ilp32 -o ./obj/0001.o 0001-hello.s
	riscv64-linux-gnu-ld -m elf32lriscv -o ./bin/0001 ./obj/0001.o
	qemu-riscv32 ./bin/0001
