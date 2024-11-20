### EVENT LOOPS TICKS
#
> - Refer to the `code-event-loop.js` for example.

> - When there is a `readStream`, we can register an event whenever its about to close.
    Example code below.

```javascript
readstream.on('close', () => {
    // When event loop is about to finish you can run some code.
    console.log('Cleanup code.')
})
```
