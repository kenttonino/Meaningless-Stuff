### NODE CLUSTER MODE
#

> - Node performance can be improve either using `Cluster Mode` or `Worker Threads`.

> - `Cluster Mode` is used to start up multiple copies of Node that are all
    running your server inside them.

> - We cannot trick `Node` into running with multiple threads, but by starting
    up multiple copies, we get multiple instances of the event loop so it
    vaguely works in a similar fashion as making Node kind of multi-threaded.

> - `Worker Threads` are going to use the thread pool that is setup by `Libuv`
    whenever we start up our node application.

<br />

![Node Performance Improvement Option](./images/image-node-performance-improvement.png)

<br />
