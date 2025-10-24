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

<br />
<br />
<br />



# Machine-Level (M-Mode) ISA, Version 1.12

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-privileged-specification?page=2

...
#

> - This chapter describes the machine-level features available in machine-mode (M-mode).
> - M-mode is used for low-level access to a hardware platform and is the first mode entered at reset, when the processor finishes initializing and is ready to execute code.
> - M-mode can also be used to implement features that are too difficult or expensive to implement in hardware directly.
> - A good example of this would be a watchdog timer implemented in low level software (firmware) which helps the system recover from faults.

<br />

Important Features of M-mode:
#

`Non-maskable Interrupts`
> - Non-maskable interrupts (NMIs) are only used for hardware error conditions.
> - When fired, they cause an immediate jump to an NMI handler running in M-mode, regardless of how that hardware thread has its interrupt enable bit set.
> - In other words, that interrupt will be serviced without a way to block the service in configuration.
> - Each NMI will have a **mcause** register associated with it.
> - This allows implementations to decide how they wish to handle these interrupts and allows them to define many possible causes.
> - NMIs do not reset processor state which enables diagnosis, reporting, and possible containment of the hardware error.

<br />

`Physical Memory Attributes (PMA)`
> - The physical memory map for a system includes address ranges like memory regions, memory-mapped control registers, and empty holes in the address space.
> - Some memory regions might not support reads, write, or execution; some might not support subword or subblock accesses; some might not support atomic operations; and some might not support cache coherence or might have different memory models.
> - In RISC-V systems, these properties and capabilities of each region of the machine's physical address space are termed physical memory attributes (PMAs).

<br />

> - The PMAs of some memory regions are fixed at chip design time - for example, for an on-chip ROM.
> - Others are fixed at board design time, depending, for example, on which other chips are connected to off-chip buses.
> - Some devices might be configurable at run time to support different uses that imply different PMAs - for example, an on-chip scratchpad RAM might be cached privately by one core in one end-application, or accessed as a shared non-cached memory in another end-application.
> - Most systems will require that at least some PMAs are dynamically checked in hardware later in the execution pipeline after the physical address is known, as some operations will not be supported at all physical memory addresses, and some operations require knowing the current setting of a configurable PMA attribute.
> - For RISC-V, we separate out specification and checking of PMAs into a separate hardware structure, the "PMA checker".
> - In many cases, the attributes are known at system design time for each physical address region, and can be hardwired into the PMA checker.
> - Where the attributes are run-time configurable, platform-specific memory-mapped control registers can be provided to specify these attributes at a granularity appropriate to each region on the platform (e.g. for an on-chip static random-access memory (SRAM) that can be flexibly divided between cacheable and uncacheable uses).
> - The details of PMAs are described in section 3.5 of the [privileged specification](https://riscv.org/specifications/ratified/).

<br />

`Physical Memory Protection (PMP)`
> - A common feature of most modern processors is some way of performing secure remote computation or a "trusted execution environment".
> - Examples of this technology include Intel Software Guard Extensions (SGX), AMD Secure Encrypted Virtualization (SEV), and Arm TrustZone.
> - While the RISC-V ISA does not provide an end-to-end solution for Trusted Execution Environments, the Physical Memory Protection (PMP) capabilities are a solid foundation on which one might construct such a system.

<br />

> - RISC-V PMP Limits the physical addresses accessible by software running on a hart (hardware thread).
> - An optional PMP unit provides per-hart machine-mode control registers to allow physical memory access privileges (read, write, execute) to be specified for each physical memory region.
> - The PMP values are checked in parallel with the PMA checks we covered in the last section.
> - The granularity of PMP access control settings are platform-specific and within a platform may vary by physical memory region, but the standard PMP encoding supports regions as small as four bytes.
> - The privileges of certain regions can be hardwired - for example, some regions might only ever be visible in machine mode but in no lower-privilege layers.

<br />
<br />
<br />



# Supervisor-Level (S-Mode) ISA, Version 1.12

> - https://trainingportal.linuxfoundation.org/learn/course/introduction-to-risc-v-lfd110/exploring-the-risc-v-instruction-set-architecture/the-privileged-specification?page=3

<br />

...
#

> - This chapter describes the RISC-V supervisor-level architecture, which contains a common core that is used with various supervisor-level address translation and protection schemes.
> - Supervisor mode is deliberately restricted in terms of interactions with underlying physical hardware, such as physical memory device interrupts, to support clean virtualization.
> - In this spirit, certain supervisor-level facilities, including requests for timer and inter-processor interrupts, are provided by implementation-specific mechanisms.
> - In some systems, a `Supervisor Execution Environment` (SEE) provides these facilities in a manner specified by a `Supervisor Binary Interface` (SBI).
> - Other systems supply these facilities directly, through some other implementation-defined mechanism.

<br />

...
#

> - RISC-V supports Page-Based 32-bit, 39-bit, and 48-bit virtual memory addressing.
> - The supervisor (S-Mode) memory-management fense instruction (SPENCE.VMA) is used to synchronize updates to in-memory memory-management data structures with current execution.
> - Executing this instruction guarantees that any previous stores already visible to the current RISC-V hart (hardware thread) are ordered before all subsequent implicit references from that hart to te memory-management data structures.
