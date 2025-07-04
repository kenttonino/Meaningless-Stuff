## $\textnormal{Adding a Remote}$

> - Let’s add `git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git` <br />
    as the remote named `linux`.

> - Adding a remote helps us fetch changes and choose a tag to rebase from.

```sh
git remote add linux git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
git fetch linux
remote: Counting objects: 3976, done.
remote: Compressing objects: 100% (1988/1988), done.
remote: Total 3976 (delta 2458), reused 2608 (delta 1969)
Receiving objects: 100% (3976/3976), 6.67 MiB | 7.80 MiB/s, done.
Resolving deltas: 100% (2458/2458), done.
From git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux
   2a11c76e5301..ecb095bff5d4   master -> linux/master
 * [new tag]                  v5.x-rc3 -> v5.x-rc3
```

> - We can pick a tag to rebase to.

> - In this case, there is only one new tag.

> - Let’s hold off on the rebase and start writing a new patch.
