## Troubleshooting Launch of Apache on GCP Virtual Machine

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121436#overview |

> - (1) Make sure you are using the `External IP`.

> - (2) Make sure you are able to `SSH` through it.

```sh
ls /var/www/html
cat /var/www/html/index.html
sudo su
service apache2 start
```
