### LIBUV THREAD POOL
#
> - Based on the example `code-thread.js`, the `crypto.pbkdf2` is not actually
    single threaded.

<br />

![Crypto Behind the Scene](./images/image-crypto-behind-the-scene.png)

<br />

> - The hashing took place in the `C++` side.

> - The `libuv` module has another responsibility that is relevant for some
    very particular functions in the standard library.

> - The Node `C++` side and `libuv` decide to do expensive calculations
    outside of the event loop entirely.

> - Instead, they make use of something called a `thread pool`.

> - The `thread pool` is a series of four threads that can be use for running
    computationally intensive tasks such as the pbkdf2 function.

> - By default `libuv` creates four threads in this thread pool. In addition
    to the thread used for the event loop, there are four other threads that
    can be used to offload expensive calculations.
