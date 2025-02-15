## Sync Workers

<br />

| Link |
| ---- |
| https://docs.gunicorn.org/en/latest/design.html#sync-workers |

<br />

> - The default worker type.

> - This handles a single request at a time.

> - `Sync` worker does not support persistent connections. Each <br />
    connection is closed after response has been sent (Even there <br />
    is a `Keep-Alive` or `Connection: Keep-alive`).
