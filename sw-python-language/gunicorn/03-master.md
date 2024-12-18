## Master

<br />

| Reference |
| ---- |
| https://docs.gunicorn.org/en/latest/design.html#master |

<br />

> - Master process is a loop that listens to various process signals <br />
    and reacts accordingly.

> - It manages the list of running workers by listening for signals <br />
    like `TTIN`, `TTOU`, and `CHLD`.

```plaintext
TTIN (Thread Trigger Increase Number)
    - A UNIX signal that Gunicorn can respond to.
    - When TTIN signal is sent to a Gunicorn process, it increases
      the number of worker processes by one.
    - Useful for dynamically scaling the number of workers to handle
      increased load without restarting the Gunicorn server.

TTOU (Thread Trigger Out Decrease)
    - Trigger to scale out workers.
    - A UNIX signal used to decrease the numbner of worker processes by one.
    - Dynamically reduce the number of workers to save resources during
      periods of low load, without restarting the Gunicorn server.
```
