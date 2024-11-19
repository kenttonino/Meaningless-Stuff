### UNEXPECTED EVENT LOOP EVENTS
#

> - Refer to the `code-multitask.js` file.

<br />

![Code Multitask](./images/image-code-multitask-result-1.png)

<br />

![Code Multitask 2](./images/image-code-multitask-result-2.png)

<br />

> - Filesystem operation are using the `Threadpool` while the
    http request are handled by the operating system.

<br/>

![Filesystem Readfile](./images/image-filesystem-readfile-1.png)

<br />

![Code Multitask 2](./images/image-code-multitask-2.png)

<br />

> - When thread is processing the filesystem request, it will
    reassign its thread to the next thread request, since file
    system might take time to complete.
