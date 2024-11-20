## Simplifying Web Server Setup with Compute Engine Startup Script v2

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/31196800#content |

<br />
<br />



## Bootstrapping with Startup Script

```sh
#!/bin/bash

apt update
apt -y install apache2
echo "Hello World from $(hostname) ${hostname -I}" > /var/html/html
```

> - `Bootstrapping` is installing OS patches or software when <br />
    an VM instance is launched.

> - In VM, you can configure startup script to bootstrap.

> - As you create the VM instance, make sure to go to `Management` <br />
    and look for `Startup script`.
