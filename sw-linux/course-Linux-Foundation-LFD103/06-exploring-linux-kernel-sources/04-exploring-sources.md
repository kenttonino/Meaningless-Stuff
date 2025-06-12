## $\textnormal{Exploring the Sources}$

> - Take a look at the `Makefile` and `MAINTAINERS` files in the <br />
    main directory and `scripts/get_maintainer.pl` and <br />
    `scripts/checkpatch.pl`.

> - Play with `cregit` or `git log` to look at the history of source <br />
    files in each of the kernel areas. You can look at individual <br />
    commits and generate a patch or two using

```sh
# This will generate a file with the information of the commit.
git format-patch -1 <commit ID>

# Check the information of the file.
cat <file-generated>
```

> - You can generate a patch for `a035d552a93bb9ef6048733bb9f2a0dc857ff869` <br />
    and take a look at the changes made by this commit:

```sh
git format-patch -1 a035d552a93bb9ef6048733bb9f2a0dc857ff869
```
