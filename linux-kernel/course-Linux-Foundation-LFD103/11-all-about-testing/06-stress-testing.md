## $\textnormal{Stress Testing}$

> - Running three to four kernel compiles in parallel is a <br />
    good overall stress test.

> - Download a few Linux kernel gits, stable, linux-next etc.

> - Run timed compiles in parallel.

> - Compare times with old runs of this test for regressions <br />
    in performance.

> - Longer compile times could be indicators of performance <br />
    regression in one of the kernel modules.

> - Performance problems are hard to debug.

> - The first step is to detect them.

> - Running several compiles in parallel is a good overall <br />
    stress test that could be used as a performance regression <br />
    test and overall kernel regression test, as it exercises <br />
    various kernel modules like memory, filesystems, dma, and drivers.

```sh
time make all
```
