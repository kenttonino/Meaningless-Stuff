## $\textnormal{Applying Patches}$

> - As we already talked about, the Linux kernel patch <br />
    files are text files that contain the differences <br />
    from the original source to the new source.

> - Each Linux patch is a self-contained change to the <br />
    code that stands on its own, unless explicitly made <br />
    part of a patch series.

> - New patches are applied as follows:

```sh
patch -p1 < file.patch
git apply --index file.patch
```

> - Either command will work; however, when a patch adds <br />
    a new file and, if it is applied using the patch <br />
    command, git does not know about the new files, and <br />
    they will be treated as untracked files.

> - The `git diff` command will not show the files in its <br />
    output and the `git status` command will show the files <br />
    as untracked.

> - You can use `git diff HEAD` to see the changes.

> - For the most part, there are no issues with building <br />
    and installing kernels; however, the `git reset --hard` <br />
    command will not remove the newly created files and a <br />
    subsequent `git pull` will fail.

> - Available options:

```plaintext
Option 1
    When a patch that adds new files is applied using the
    patch command, run git clean to remove untracked files
    before running git reset --hard.

    For example, git clean -dfx will force the removal of
    untracked directories and files, ignoring any standard
    ignore rules specified in the .gitignore file.

    You could include the -q option to run git clean in
    quiet mode, if you do not care to know which files
    are removed.

Option 2
    An alternate approach is to tell git to track the newly
    added files by running git apply --index file.patch.

    This will result in git applying the patch and adding
    the result to the index.

    Once this is done, git diff will show the newly added
    files in its output and git status will report the
    status correctly, tagging these files as newly created
    files.
```
