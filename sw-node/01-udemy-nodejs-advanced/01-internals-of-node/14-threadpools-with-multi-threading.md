### THREAD POOL WITH MULTI-THREADING
#

<br />

![Thread Pool Behind The Scene](./images/image-crypto-behind-the-scene.png)

<br />

> - This section is based on the `code-thread-2.js` code.

<br />

![Thread Pool Behind the Scene 2](./images/image-thread-pool-behind-the-scene.png)

<br />

![Thread Pool Behind the Scene 3](./images/image-thread-pool-behind-the-scene-2.png)

<br />

![Thread Pool Behind the Scene 4](./images/image-thread-pool-behind-the-scene-3.png)

<br />

> - Based on the example above, the first 4 calls each got assigned to their own
    individual thread. Thread `#1` and `#2` get assigned to `CORE #1`. Then,
    thread `#3` and `#4` get assigned to `Core #2`. The core can only process
    two threads at the same time because of the multi-threading technology in the
    CPU above. However, each core still had to do twice the amount of work at the
    same time.

> - Once the first 4 calls is complete, the 5th thread will get assigned to the
    thread pool.
