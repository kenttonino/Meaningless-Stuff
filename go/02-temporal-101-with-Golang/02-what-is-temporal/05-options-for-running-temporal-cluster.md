### SELF-HOSTED
#
> - Option is to use `Docker Compose`.

> - It's extremely convenient for development clusters because it avoids the need
    to manually install and configure individual components.

> - Temporal maintains a Github repository that offers several configurations for
    you to use.

```bash
https://github.com/temporalio/docker-compose
```

> - `Temporalite`, a recent contribution from DataDog, is quickly becoming popular
    for development.

```bash
https://github.com/temporalio/temporalite
```


> - Temporalite provides a small Temporal Cluster that runs in a single process and
    doesn't have any external runtime dependencies, so it is less complex and less
    resource-intensive than the Docker Compose approach.

> - Self-hosted Temporal Clusters are often run on `Kubernetes`, although this is
    not required.

> - The documentation provides more information about cluster deployment.

```bash
https://docs.temporal.io/self-hosted-guide
```

<br />
<br />



### TEMPORAL CLOUD
#
> - The alternative to hosting your own Temporal Cluster is to use Temporal Cloud, a
    fully-managed cloud service operated and staffed by Temporal.

> - It's a simple, secure, scalable way to power your Temporal applications, providing
    99.9% uptime and SOC2 compliance.

> - It also comes with developer and production support from the experts of Temporal.

> - Temporal Cloud uses consumption-based pricing, so you only pay for what  you use,
    and you can see your current and past usage at any time time from the web interface.

![Temporal Cloud Deployment](./image-temporal-cloud.png)

<br />
<br />



### WHERE YOUR CODE RUNS
> - Regardless of whether you host your own Temporal Cluster or use Temporal Cloud,
    your application runs on servers that you control.

> - These might be servers in your own datacenter or virtual machines hosted by your
    favorite cloud provider, but it's important to understand that neither a self-hosted
    Temporal Cluster nor our Temporal Cloud service runs your code or even has access
    to your code.

<br />
<br />



### QUIZ
#

```plaintext
In a Temporal application, which of the following is responsible for executing your code?
- Worker
```
