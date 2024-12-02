## Saving Costs with Preemptible VMs

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121414#overview |

<br />
<br />



## Preemptible VM

> - A `VM` instances in Google Compute Engine that are cheaper <br />
    than standard VMs but can be shut down at any time.

> - `Short-lived cheaper` (up to 80%) compute instances.

```plaintext
- Can be stopped by GCP any time (preempted) within 24 hours.
- Can be instances get 30 second warning (to save anything
  they want to save).
```

> - Use `Preempt VM's if`:

```plaintext
- Your application are fault tolerant.
- Your are very cost sensitive.
- Your workload is NOT immediate.
```
