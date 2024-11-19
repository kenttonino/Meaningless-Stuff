## $\textnormal{Compiling the Kernel}$

> - Run the following command to generate a kernel <br />
    configuration file based on the current configuration.

> - This step is important to configure the kernel, <br />
    which has a good chance to work correctly on your system.

> - You will be prompted to tune the configuration <br />
    to enable new features and drivers that have been <br />
    added since Ubuntu snapshot the kernel from the mainline.

> - `make all` will invoke `make oldconfig` in any case.

> - I am showing these two steps separately just to <br />
    call out the configuration file generation step.

```sh
make oldconfig
```

> - Another way to trim down the kernel and tailor it <br />
    to your system is by using `make localmodconfig`.

> - This option creates a configuration file based on <br />
    the list of modules currently loaded on your system.

```sh
lsmod > /tmp/my-lsmod
make LSMOD=/tmp/my-lsmod localmodconfig
```

> - Once this step is complete, it is time to compile the kernel.

> - Using the `-j` option helps the compiles go faster.

> - The `-j` option specifies the number of jobs <br />
    `(make commands)` to run simultaneously:

```sh
make -j3 all
```
