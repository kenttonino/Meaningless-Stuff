## $\textnormal{Static IP Addresses}$

> - Scenario: How do you get a constant External IP <br />
    address for a VM instances?

```plaintext
- Quick and dirty way is to assign an static IP address to the VM.
```

> - Using Static IP address with an VM instance.

```plaintext
VPC Network -> IP Addresses
    - Click "Reserve External Static IP Address".
    - Static address should be in the same region as your VM.
    - After creating the static IP, assigned it to a VM.
```
