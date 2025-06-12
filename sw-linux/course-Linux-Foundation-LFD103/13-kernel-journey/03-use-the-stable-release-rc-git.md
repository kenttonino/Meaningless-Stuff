## $\textnormal{Use the Stable Release rc git}$

> - Clone the git repository specified in the email.

> - A new directory `linux-5.2.y` gets created, which <br />
    contains the kernel sources.

> - Starting out with the distribution configuration <br />
    file is the safest approach for the very first <br />
    kernel install on any system.

> - You can do so by copying the configuration for <br />
    your current kernel from `/boot`.

> - Once this step is complete, it is time to compile <br />
    the kernel, install the new kernel and run `update-grub` <br />
    to add the new kernel to the grub menu.

> - Now it is time to reboot the system to boot the newly installed kernel.

```sh
----------------------------------------------------------------------------------------------------------
stable_rc_checkout.sh
     #!/bin/bash
     ## SPDX-License-Identifier: GPL-2.0
     # Copyright(c) Shuah Khan <skhan@linuxfoundation.org>
     #
     # License: GPLv2
     # Example usage: stable_rc_checkout.sh <stable-rc e.g 5.2>
     mkdir -p stable_rc
     cd stable_rc
     git clone git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable-rc.git linux-$1.y
     cd linux-$1.y
     #cp /boot/<currentconfig> .config # update script
     make -j2 all
     rc=$?; if [[ $rc !=0 ]]; then exit $rc; fi
     su -c "make modules_install install"
     echo Ready for reboot test of Linux-$1
----------------------------------------------------------------------------------------------------------
```
