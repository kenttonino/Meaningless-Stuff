## $\textnormal{Automated Build Bots and Continuous Integration Test Rings}$

> - Automated build bots and Continuous Integration (CI) test <br />
    rings run tests on various kernel repositories.

> - Maintainers and developers can request their repositories <br />
    to be added to the `linux-next` integration tree and the <br />
    0-day build bot.

> - The 0-day build bot can pull in patches and run build tests <br />
    on several configurations and architectures.

> - It is helpful in finding compile errors and warnings that <br />
    might show up on other architectures that developers might <br />
    not have access to.

> - Continuous Integration (CI) rings are test farms that host <br />
    several platforms and run boot tests and Kernel Selftests <br />
    on `stable`, `linux-next`, and `mainline` trees.

> - All these tests are run on real hardware, as well as Qemu <br />
    environments, covering a wide range of architectures and <br />
    configurations.

> - Please take a look at the following resources for the latest <br />
    status on kernel releases:

```plaintext
Kernel CI Dashboard: https://kernelci.org/
0-Day - Boot and Performance Issues: https://lists.01.org/hyperkitty/
Linaro QA: https://qa-reports.linaro.org/lkft/
Buildbot: https://kerneltests.org/
```
