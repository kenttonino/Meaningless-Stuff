## Understanding Command Structure in GCloud to Play with Services

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121352#overview |

<br />
<br />



## GCloud Command Structure

```sh
gcloud GROUP SUBGROUP ACTION ...
```

> - `GROUP` is a config or compute or container or dataflow or <br />
    functions or iam.

> - `SUBGROUP` are instances or images or instance-templates or <br />
    machine-types or regions or zones.

> - `ACTION` can create or list or start or s  top or describe ...

```sh
gcloud compute instances list
gcloud compute zones list
gcloud compute regions list
gcloud compute machine-types list
gcloud compute machine-types list --filter="zone:us-central1-b"
gcloud compute machine-types list --filter="zone:(us-central1-b europe-west1-d)"
```
