## $\textnormal{About Patches}$

> - Linux kernel development is done using git, which was started by Linus Torvalds
    and is currently maintained by Junio C. Hamano.

> - To learn more about git, you can read [A short History of Git](https://git-scm.com/book/en/v2/Getting-Started-A-Short-History-of-Git) and the [Git Book](https://git-scm.com/book/en/v2) for
    details on how to use git.

> - The first three chapters of the Git Book provide the basics on how to get commit
    history, working with remotes, creating branches, tags, and rebasing to tagged
    versions.

> - These are essential survival skills, necessary for any developer.

> - Developers send changes they want to see in the kernel to the kernel mailing lists
    through email.

> - These changes are called `patches`.

> - Patches are small incremental changes made to the kernel.

> - Each patch contains a change to the kernel that implements one independent
    modification that stands on its own.

> - A patch cannot break the kernel build.

> - Requiring each patch to do one thing makes it easier to isolate regressions;
    reverting a problem patch becomes easier as well.

> - Complex changes to the kernel are thus split into smaller chunks.

> - As an example, if you were to find an existing compile warning while making a
    code change, you would fix it independently in a separate patch instead of
    combining it with your code change.

> - Maintainers have their personal preferences on how granular the patch splitting
    should be for their subsystems.

> - This is true for coding styles as well.

> - Maintainers are good about giving feedback on their preferences during the patch
    review.


