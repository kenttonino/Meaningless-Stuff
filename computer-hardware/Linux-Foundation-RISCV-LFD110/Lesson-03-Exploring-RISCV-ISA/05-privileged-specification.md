# Introduction to the Privileged Specification

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-privileged-specification?page=1
> - The unprivileged instruction set architecture presented so far is not enough to run modern execution environments.
> - As its name suggests, the privileged specification contains descriptions of the RISC-V ISA which operate in Machine Mode (M-mode) or Supervisor Mode (S-mode).
> - These modes have elevated privileges and are therefore described in a completely separate document from the base ISA and standard extensions.
> - This specification also contains additional functionality required for running rich operating systems like Linux.
> - In fact, the RISC-V privileged specification was designed to support virtualized systems implementing the typical software stack shown below:

![07-software-stacks-supported-by-RISCV-architecture](./images/07-RISCV-Architecture-Software-Stack.png)

> - The diagram shows a virtual machine monitor configuration where multiple multiprogrammed operating systems are supported by a single hypervisor.
> - Each OS communicates via a _Supervisor Binary Interface_ (SBI) with the hypervisor, which provides the _Supervisor Execution Environment_ (SEE).
> - The hypervisor communicates with the _Hypervisor Execution Environment_ (HEE) using a _Hypervisor Binary Interface_ (HBI), to isolate the hypervisor from details of the hardware problem.
