## Achieving High Availability with Live Migration and Automatic Report

<br />

| Link |
| ---- |
| https://www.udemy.com/course/google-cloud-certification-associate-cloud-engineer/learn/lecture/25121402#overview |

<br />
<br />



## Compute Engine: Live Migration & Availability Policy

> - Live Migration:

```plaintext
- Your running instance is migrated to another host in the same zone.
- Does not change any attributes or properties of the VM.
- Supported for instances with local SSDs.
- Not supported for GPUs and preemptible instances.
```

> - Important Configuration = Availability Policy:

```plaintext
- On host maintenance: What should happen during periodic
  infrastructure maintenance?
    - Migrate (default): Migrate VM instance to other hardware.
    - Terminate: Stop the VM instance.
- Automatic restart: Restart VM instances if they are terminated
  due to non-user-initiated reasons (maintenance event, hardware
  failure, etc.)
```

<br />

| Availability Policies |
| --------------------- |
| [availability-policies](./images/02-availability-policy.png) |
