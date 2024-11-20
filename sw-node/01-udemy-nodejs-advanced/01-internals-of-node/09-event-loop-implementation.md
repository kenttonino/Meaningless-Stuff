### EVENT LOOP IMPLEMENTATION
> - Refer to the `code-event-loop.js` for the implementation.

> - The first check that node does is when it's deciding whether or not
    it should continue running our program is to look to see if there
    are still any functions that have been registered with `setTimeout`,
    `setInterval`, or `setImmediate` and still need to be executed.

> - Internally, `Node.js` automatically detect when the JavaScript code
    setup something like a setTimeout call or issues a new call to the
    FS module.

> - These automatic detections occur even during that initial run of our
    myFile.

> - When you run a node program and set up a HTTP server, that node program
    does not instantly close and go back to the terminal because there is
    a setup a pending OS task.
