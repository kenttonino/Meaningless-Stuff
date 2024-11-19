## $\textnormal{Creating a New Branch}$

> - Before making a change, let's create a new branch in <br />
    the `linux_mainline` repository you cloned earlier <br />
    to write your first patch.

> - We will start by adding a remote first to do a `rebase` <br />
    (pick up new changes made to the mainline).

```sh
cd linux_mainline
git branch -a
* master
  remotes/linux/master
  remotes/origin?HEAD -> origin/master
  remotes/origin/master
```
