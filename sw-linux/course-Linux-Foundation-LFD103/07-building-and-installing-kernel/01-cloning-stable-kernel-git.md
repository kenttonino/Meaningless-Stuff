## $\textnormal{Cloning the Stable Kernel Git}$

> - The stable repository has several branches going <br />
    to `linux-2.6.11.y`.

```plaintext
Latest Stable Release: https://www.kernel.org/
```

<br />

```sh
# Clone the stable release.
git clone git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable.git linux-stable

# Go to the cloned repository.
cd linux-stable

# Search using GREP (Global Regular Expression Print).
git branch -a | grep linux-5
    remotes/origin/linux-5.12.y
    remotes/origin/linux-5.11.y
    remotes/origin/linux-5.10.y

# Check the remote branch.
git checkout linux-5.12.y
```
