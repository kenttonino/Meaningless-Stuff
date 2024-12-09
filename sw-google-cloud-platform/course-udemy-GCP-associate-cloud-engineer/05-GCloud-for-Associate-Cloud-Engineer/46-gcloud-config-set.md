## GCloud Config Set

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121360#overview |

<br />

> - List the account that being used.

```sh
gcloud config list account
```

> - Show the region.

```sh
gcloud config list compute/region
```

> - Sets the specific property in active configuration.

```sh
gcloud config set core/project VALUE
gcloud config set compute/region VALUE
gcloud config set compute/zone VALUE
gcloud config set core/verbosity VALUE(debug)
```
