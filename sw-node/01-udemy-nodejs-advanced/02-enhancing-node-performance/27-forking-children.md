### Forking Children
#

> - In `code-index-2.js`, the cluster manager has that `isManager` property
    always set to true.

> - As soon as we start forking off additional worker instances, the `isManager`
    flag is going to set to false for `Worker Instances`.
