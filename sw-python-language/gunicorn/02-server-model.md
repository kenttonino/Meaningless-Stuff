## Server Model

<br />

| Link |
| ---- |
| https://docs.gunicorn.org/en/latest/design.html#server-model |

<br />

> - `Gunicorn` is based on the pre-fork worker model.

> - There is a central master process that manages as set of worker <br />
    processes.

| Master Process with Sync Worker |
| ------------------------------- |
| ![sync-worker](./images/01-master-process-sync-worker.png) |

<br />

| Master Process with Async Worker |
| -------------------------------- |
| ![async-worker](./images/02-master-process-async-worker.png) |

<br />

| Master Process with Tornado Worker |
| ---------------------------------- |
| ![tornado-worker](./images/03-master-process-tornado-worker.png) |

<br />

