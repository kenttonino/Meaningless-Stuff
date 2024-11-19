// NODE STARTS HERE

/*
  Tick
    - Every single time the event loop runs inside a node application.

  Note:
    - Every single time that the event loop is about to execute Node
      first does a quick check to decide whether or not it should
      allow the loop to proceed for another iteration.
*/

const pendingTimers = [];
const pendingOSTasks = [];
const pendingOperations = [];

// New timers, tasks, operations are recorder from myFile running.
myFile.runContents();

function shouldContinue() {
  // Check #1: Any pending setTimeout, setInterval, setImmediate?
  // Program will not exist and will continue for another tick.

  // Check #2: Is there any pending operating system tasks?
  // Example is an HTTP server listening to requests on some port.

  // Check #3: Any pending long running operations? (Like fs modules.)
  return pendingTimers.length || pendingOSTasks.length || pendingOperations.length
}

// Entire body executes in one tick.
while (shouldContinue()) {
  // #1: Node looks at pendingTimers and sees if any functions are ready to be called.
  // Functions: setTimeout and setInterval.

  // #2: Node looks at pendingOSTasks and pendingOperations and calls relevant callbacks.

  // #3: Pause execution. Node sits around and waits for new events to occur. Continue when:
  // - A new pendingOSTask is done.
  // - A new pendingOperations is done.
  // - A time is about to complete.

  // #4: Look at pendingTimers. Call any setImmediate.

  // #5: Handle any close events. Clean up code can be done here.
}


// EXIT NODE APPLICATION
