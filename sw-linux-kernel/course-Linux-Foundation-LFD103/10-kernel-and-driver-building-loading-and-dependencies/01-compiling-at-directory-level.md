## $\textnormal{Compiling a Single Source File: make path/file.o}$

> - Let's see how we can build a driver or module or <br />
    a single source file in the kernel.

> - Compiling a single source file: `make path/file.o`:

```sh
make drivers/media/test-drivers/vimc/vimc-core.o

# Output.
CALL    scripts/checksyscalls.s
CALL    scripts/atomic/check-atomics.sh
DESCEND objtool
CC [M]  drivers/media/test-drivers/vimc/vimc-core.o
```

> - Compiling at the directory level: `make path`:

```sh
make drivers/media/test-drivers/vimc/

# Output.
CALL    scripts/checksyscalls.sh
CALL    scripts/atomic/check-atomics.sh
DESCEND objtool
CC [M]  drivers/media/test-drivers/vimc/vimc-core.o
CC [M]  drivers/media/test-drivers/vimc/vimc-common.o
CC [M]  drivers/media/test-drivers/vimc/vimc-streamer.o
CC [M]  drivers/media/test-drivers/vimc/vimc-capture.o
CC [M]  drivers/media/test-drivers/vimc/vimc-debayer.o
CC [M]  drivers/media/test-drivers/vimc/vimc-scaler.o
CC [M]  drivers/media/test-drivers/vimc/vimc-sensor.o
LD [M]  drivers/media/test-drivers/vimc/vimc.o
```

> - The two examples we provided show us how to <br />
    compile a single source file for the driver <br />
    vimc, which resides at `drivers/media/test-drivers/vimc`.

> - You can see how the first `make` command just <br />
    compiles the source file and the second one builds the driver.

> - Running `make <path>` localizes a build to the specified `path`.
