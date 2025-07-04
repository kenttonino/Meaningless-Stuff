## $\textnormal{What Does the Release Cycle Look Like?}$

> - While the kernel development is a continuous process, at certain points during the
    development, when a set of features and bug fixes are ready, a new version of the
    kernel is released.

> - These new version are called `kernel releases`.

> - Linus Torvalds releases a new kernel and opens 2-week merge window.

> - During this merge window, he pulls code for the next release from subsystem
    maintainers.

> - Subsystem maintainers send signed git pull requests to Linux either during the
    merge window or before.

> - All major new development is added to the kernel during the merge window.

> - 10,000+ change sets (patches) get pulled into Linus's tree during these 2 weeks,
    at the end of which he releases the first release candidate, known as `rc1`.

> - At this point, the release cycle moves into a bug fixes-only mode, with a series
    of `release candidate (rc)` releases from Linus.

> - One week after `rc1` is released, `rc2` comes out; `rc3` comes out a week after,
    and so on, until all major bug fixes and regressions (if any) are resolved.

> - The new cycle begins with a 3-week `quiet period`, which starts a week before the
    release, and continues through the 2-week merge window.

> - Maintainers and key contributors are busy getting their trees ready to send pull
    requests to Linus.

> - Please notee that the quiet period isn't formalized, and each sub-system might
    handle it differently.

> - This period isn'tt well advertised, and new developers might see a slow response
    from the community.

| Linux Development Cycle |
| ----------------------- |
| ![Linux Development Cycle](./images/image-linux-development-cycle.png) |
