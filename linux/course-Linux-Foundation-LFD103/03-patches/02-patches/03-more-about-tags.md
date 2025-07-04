## $\textnormal{More About Tags}$

```plaintext
Acked-by
    - This tag is often used by the maintainer of the affected code when that maintainer
      neither contributed to, nor forwarded the patch.
    - As an example, I maintain the usbip driver and I use the Acked-by tag to ask the
      USB maintainer to pick patches sent by other developers.

Reviewed-by
    - This tag indicates that the patch has been reviewed by the person named in the tag.

Reported-by
    - This tag gives credit to people who find bugs and report them.

Tested-by
    - This tag indicates that the patch has been tested by the person named in the tag.

Suggested-by
    - This tag is used to give credit for the patch idea to the person named in the tag.

Fixes
    - This tag indicates that the patch fixes an issue in a previous commit referenced
      by its Commit ID.
    - This tag allows us to track where the bug originated.
```

> - Reference: https://www.kernel.org/doc/html/latest/process/submitting-patches.html#using-reported-by-tested-by-reviewed-by-suggested-by-and-fixes
