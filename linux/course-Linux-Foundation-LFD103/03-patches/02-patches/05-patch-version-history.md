## $\textnormal{Patch Version History}$

> - It is a requirement to include the patch version history when sending a re-worked patch.

> - The patch revision history on what changed between the current version and the previous
    is added between the "---" and the "start of the diff" in the patch file.

> - Any text that is added here thrown away annd will be included in the commit when it is
    merged into the source tree.

> - It is good practice to include information that helps with reviews and doesn't add value
    to the commit log here.

> - Please check mailing lists to get a feel for what kind of information gets added here.

> - Do not send new versions of a patch as a reply to a previous version.

> - Start a new thread for each version of a patch.

> - An example description of what changed is: `Changed sicne v3: Added null check for
    <variable name> as suggested by <name>.`

> - You see a [patch example with version history for the v2 version.](https://patchwork.kernel.org/project/linux-kselftest/patch/20190926224014.28910-1-skhan@linuxfoundation.org/)
