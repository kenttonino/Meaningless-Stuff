## $\textnormal{Active Kernel Releases}$

```plaintext
Release Candidate (RC)
    - Release Candidate or RC releases are mainline kernel pre-releases that are used
      for testing new features in the mainline.
    - These releases must be compiled from source.
    - Kernel developers test these releases for bugs and regressions.

Stable
    - Stable releases are bug fix-only releases.
    - After Linus releases a mainline kernel, it moves into stable mode.
    - Any bug fixes for a stable kernel are backported from the mainline kernel and
      applied to stable git by a designated stable kernel release maintainer.
    - Stable kernel updates are released on average, once a week, or on an as needed
      basis.

Long-term
    - Long-term releases are stable releases selected for long-term maintenance to
      provide critical bug fixes for older kernel trees.
```

> - Stable releases are normally only maintained for a few mainline release cycles,
    unless they are marked as long-term releases (LTR).

> - A long-term release, as the name suggests, is maintained for a longer period
    to allow multiple vendors collaborate on a specific kernel release that they
    plan on maintaining for an extended period of time.

> - You can refer to the `Linux Kernel Archives` for more details about current stable
    and long-term release, and their release cadence.

```bash
https://www.kernel.org/category/releases.html
```
