## $\textnormal{Git Post-Commit Hooks}$

> - Git includes some `hooks` for scripts that can be <br />
    run before or after specific git commands are <br />
    executed.

> - Checking the patch for compliance and errors <br />
    can be automated using git pre-commit and <br />
    post-commit hooks.

> - The `post-commit` hook is run after you make <br />
    a git commit with the git commit command.

> - If you don't already have `/usr/share/codespell/dictionary.txt`, do:

```sh
sudo apt-get install codespell
```

> - If you already have a `.git/hooks/post-commit` file, move it <br />
    to `.git/hooks/post-commit.sample`. git will not execute files <br />
    with the `.sample` extension. Then, edit the `.git/hooks/post-commit` <br />
    file to contain only the following two lines:

```sh
#!bash
#!/bin/sh
exec git show --format=email HEAD | ./scripts/checkpatch.pl --strict --codespell
# Make sure the file is executable:
chmod a+x .git/hooks/post-commit
```

> - After you make the commit, this hook will output any `checkpatch` <br />
    errors or warnings that your patch creates. If you see warnings <br />
    or errors that you know you added, you can amend the commit by <br />
    changing the file, using `git add` to add the changes, and then <br />
    using `git commit --amend` to commit the changes.
