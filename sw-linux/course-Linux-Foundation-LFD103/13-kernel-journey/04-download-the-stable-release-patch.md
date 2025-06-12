## $\textnormal{Download the Stable Release Patch and Apply the Patch}$

> - Alternately, you can download and apply the patch. <br />

> - The following is my workflow for getting the <br />
    repository ready, applying the patch, compiling, <br />
    and installing.

> - Run the `stable_checkout.sh` script once to set <br />
    up your stable repository.

> - After that, run `pre_compile_setup.sh` to get the <br />
    patch file and apply whenever a stable release patch <br />
    is released.

> - I apply patches and use the same repository to be <br />
    able to detect regressions.

> - I save `dmesg` for the current rc to compare with <br />
    the next `rc`.

> - Please feel free to make changes to suit your needs.

> - Also, make sure to pass in the correct release <br />
    information from the stable release emails as arguments <br />
    to this script.

```sh
----------------------------------------------------------------------------------------------------------
stable_checkout.sh
     #!/bin/bash
     ## SPDX-License-Identifier: GPL-2.0
     # Copyright(c) Shuah Khan <skhan@linuxfoundation.org>
     #
     # License: GPLv2
     # Example usage: stable_checkout.sh <stable-release-version e.g 5.2>
     mkdir -p stable
     cd stable
     git clone git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable.git linux_$1_stable
     cd linux_$1_stable
     git checkout linux-$1.y
     #cp /boot/ .config # update script​
----------------------------------------------------------------------

pre_compile_setup.sh
     #!/bin/bash
     ## SPDX-License-Identifier: GPL-2.0
     # Copyright(c) Shuah Khan <skhan@linuxfoundation.org>
     #
     # License: GPLv2
     # Example usage: pre_compile_setup.sh 5.2.11 1 5
     # Arg 1 is the stable release version which is typically 5.2.x
     # Arg2 is the 1 for rc1 or 2 for rc2
     # Arg3 is 4.x or 5.x used to call wget to get the patch file
     echo Testing patch-$1-rc$2
     wget https://www.kernel.org/pub/linux/kernel/v$3.x/stable-review/patch-$1-rc$2.gz ;
     git reset --hard
     make clean
     git pull
     gunzip patch-$1-rc$2.gz
     git apply --index patch-$1-rc$2
     echo "Patch-$1-rc$2 applied"
     head Makefile
     make -j2 all
     rc=$?; if [[ $rc != 0 ]]; then exit $rc; fi
     su -c "make modules_install install"
     echo Ready for reboot test of Linux-$1-$2
---------------------------------------------------------------------------------------------------------
```
