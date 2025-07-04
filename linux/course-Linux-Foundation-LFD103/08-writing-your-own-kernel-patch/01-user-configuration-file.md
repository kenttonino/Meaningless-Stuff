## $\textnormal{Creating a User-Specific Git Configuration File}$

> - Let's start by configuring global git options, and <br />
    then you can go on to cloning the kernel repository.

> - Create a user-specific Git configuration file named <br />
    `.gitconfig` in your home directory with your name, <br />
    email and other needed configurations.

> - This information is used for commits and patch generation.

> - The email in the `.gitconfig` file should be the same <br />
    email you will use to send patches.

> - The `name` is the `Author` name, and the `email` is the <br />
    email address for the commit.

> - Linux kernel developers will not accept a patch where <br />
    the `From` email differs from the `Signed-off-by` line, <br />
    which is what will happen if these two emails do not match.

> - Configuring `signoff = true` as shown above adds the <br />
    `Signed-off-line` with the configured email as shown <br />
    above in `email=your.email@example.com` to the commit.

> - This can be done manually by running the `git` command <br />
    with the `-s` option. E.g.:

```sh
git commit -s
```

> - Configure the `name= field` with your full legal name.

> - I mentioned this earlier that by adding your Signed-off-by <br />
    line to a patch, you are certifying that you have read <br />
    and understood the `Developer's Certificate of Origin` and <br />
    abide by the `Linux Kernel Enforcement Statement`. Please <br />
    review the documents before you send patches to the kernel.

```plaintext
Developer's Certificate of Origin: https://www.kernel.org/doc/html/latest/process/submitting-patches.html
Linux Kernel Enforcement Statement: https://www.kernel.org/doc/html/latest/process/kernel-enforcement-statement.html
```
