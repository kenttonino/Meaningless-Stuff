### CLUSTER IN ACTION
#

> - Refer to `code-index-3.js` file.

> - If we only have on child instance, we still only have one instance
    of the event loop and we're not really gaining any performance
    benefit or anything like that.

> - The fork will be executed in additional four times and each time
    `isMaster` will be set to false, then the express logic will be
    executed.
