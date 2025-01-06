## Playing with GCloud Compute Instances Create

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121346#overview |

<br />
<br />



## GCloud Compute Instances Create

> - Creating compute instances.

```sh
# Below are sample options.
# --machine-type n1-standard-1
# --custom-cpu 6 --custom-memory 3072MB --custom-vm-type n2
# --image or --image-family or --source-snapshot or --source-instance-template or --source-machine-image
# --service-account or --no-service-account
# --zone=us-central1-b
# --tags (Allow network firewall rules and routes to be applied to VM instances.)
# --preemptible
# --restart-on-failure (default) --no-restart-on-failure --maintenance-policy (MIGRATE (default) / TERMINATE)
# --boot-disk-size --boot-disk-type --boot-disk-auto-delete (default) ---no-boot-disk-auto-delete
# --deletion-protection --no-deletion-protection (default)
# --metadata/metadata-from-file startup-script/startup-script-url
gcloud compute instances create [NAME]

# Show all the machine types.
gcloud compute machine-types list
```
