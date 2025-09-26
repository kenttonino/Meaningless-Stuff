# Introduction

> - In the early days of computers were much simpler.
> - The various components of a system, such as the CPU, memory, mass storage, and network interfaces, were developed together and, as a result, were quite balanced in their performance.
> - For example, the memory and network interfaces were not (much) faster than the CPU at providing data.

<br />

...
#

> - This situation changes once the basic structure of computers stabilized and hardware
> - Suddenly the performance of some components of the computer fell significantly behind and bottlenecks developed.
> - This was specially true for mass storage and memory subsystems which, for cost reasons, improved more slowly relative to other components.

<br />

...
#

> - The slowness of mass storage has mostly been dealt with using software techniques: operating systems keep most often used (and mostly to be used) data in main memory, which can be accessed at a rate orders of magnitude faster than the hard disk.
> - Cache storage was added to the storage devices themselves, which requires no changes in the operating system to increase performance.

<br />

...
#

> - Unlike storage subsystems, removing the main memory as a bottleneck has proven much more difficult and almost all solutions require changes to the hardware.

<br />

Today changes mainly come in the following forms:
#

1. RAM Hardware (Speed and Parallelism) <br />
2. Memory Controller Designs <br />
3. CPU Caches <br />
4. Direct Memory Access (DMA) for Devices
