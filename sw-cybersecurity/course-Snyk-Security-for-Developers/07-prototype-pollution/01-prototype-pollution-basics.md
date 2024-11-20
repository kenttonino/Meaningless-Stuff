## $\textnormal{What is Prototype Pollution?}$

> - `Prototype Pollution` is an injection attack that targets <br />
    JavaScript runtimes.

> - With prototype pollution, an attacker might control the <br />
    default values of an object's properties.

> - This allows the attacker to tamper with the logic of the <br />
    application and can also lead to denial of service or, in <br />
    extreme cases, remote code execution.

```plaintext
https://snyk.io/learn/application-security/?loc=learn
```

<br />

| Not an Isolated Case |
| -------------------- |
| ![samples](./images/01-prototype-pollution-example.png) |

<br />

```plaintext
https://security.snyk.io/vuln/SNYK-JS-JQUERY-174006
https://security.snyk.io/vuln/SNYK-JS-LODASH-450202
https://security.snyk.io/vuln/SNYK-JS-EXPRESSFILEUPLOAD-595969
https://security.snyk.io/vuln/SNYK-JS-MINIMIST-559764
https://security.snyk.io/vuln/npm:hoek:20180212
```

> - Refer to sample [code](./code/main.js).
