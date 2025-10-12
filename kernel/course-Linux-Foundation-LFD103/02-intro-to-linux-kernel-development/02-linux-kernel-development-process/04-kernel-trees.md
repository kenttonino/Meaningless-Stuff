## $\textnormal{Kernel Trees - What Are They?}$

> - You have probably heard about `kernel trees`; and we have already mentioned the term in
    previous pages.

> - The kernel code is organized in several main and subsystem git repositories called `trees`.

```plaintext
Kernel Trees
    The Mainline Kernel Tree
        - This tree is maintained by Linus Torvalds.
        - This is where Linus releases mainline kernels and RC releases.

    The Stable Tree
        - This tree is maintained by Greg Kroah-Hartman.
        - This tree consists of stable release branches.
        - Stable releases are based on this tree.

    The Linux-next Tree
        - This is the integration tree maintained by Stephen Rothwell.
        - Code from a large number of subsystem trees gets pulled into this tree periodically
          and then released for integration testing.
        - The process of pulling changes from various trees catches merge conflicts (if any)
          between trees.
```

> - One of my first actions as a maintainer was to request that my tree be added to
    linux-next.

> - After I commit patches to my tree, I wait 3 to 7 days before sending a pull request to
    Linus, giving enough time to find problems and regressions, if any.

> - Patches applied to a tree that will be added to `linux-next` are only for the next merge
    window, including during the merge window.

> - Patches for the next release may be added to `linux-next` after the merge window has
    closed, and the `rc1` candidate has been released by Linus.
