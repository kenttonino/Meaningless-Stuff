## $\textnormal{Getting Your System Ready}$

> - On development and test systems, it is a good idea to ensure there is ample space for kernels
    in the boot partition.

> - Choosing a whole disk install or setting aside 3 GB disk space for the boot partition is
    recommended.

> - Once the distribution is installed and the system is ready for development packages, enable
    the root account and also enable sudo for your user account.

> - The system might already have the `build-essential` package, which is what you need to build
    Linux kernels on an x86-64 system.

> - Recent Ubuntu distributions install a lot of the tools we will need.

```bash
sudo apt-get install build-essential vim git cscope libncurses-dev libssl-dev bison flex
sudo apt-get install git-email
```

> - Once you have a development system, it is time to check if your system supports the [Minimal requirements to compile the Kernel](https://www.kernel.org/doc/html/latest/process/changes.html), these change from time to time.

> - It is a good idea to make sure your system is configured correctly.

> - The next step is finding information on email clients and configuring your email client for
    sending patches and responding to emails.

> - We highly recommended using `git send-email` for sending patches.
