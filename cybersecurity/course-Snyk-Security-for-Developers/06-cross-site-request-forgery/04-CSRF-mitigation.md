## $\textnormal{CSRF Tokens}$

> - One mitigation strategy is to use a random and unique <br />
    token for use in HTTP requests; these are called `CSRF`, <br />
    `anti-forgery` or `request verification tokens`.

> - They’re a shared secret between the client and <br />
    server-side of an application, and are included in any  <br />
    requests the client makes to the server.

> - The server validates the token on each request to ensure <br />
    it’s still the authorized user making the request.

> - The token is usually contained in a hidden field of an <br />
    HTML form.

> - Refer to OWASP CSRF cheatsheet.

```plaintext
https://cheatsheetseries.owasp.org/cheatsheets/Cross-Site_Request_Forgery_Prevention_Cheat_Sheet.html
https://snyk.io/advisor/
https://www.npmjs.com/package/csrf-csrf
```

```typescript
// Implemented as middleware.
// Each session now automatically gets a new CSRF token.
// The default configuration ensures the validity of the token is checked whenever a POST request is received.
const { doubleCsrf } = require("csrf-csrf");

// Add the CSRF token to each form in application.
<form action="https://saturnbank.com/transfer" method="POST">
    <input type="hidden" bsb="421314" accountNo="1736123125" amount="100" />
    <input type="hidden" name="_csrf" value="<%= csrfToken %>" />
</form>

// Use csrfProtection as a middleware for each POST.
app.post('/transfer', csrfProtection, (req, res) => {
	// …
});
```

<br />
<br />



## $\textnormal{SameSite Cookies}$

> - The `Strict` value ensures that the browser does not include <br />
    the cookie in any requests that originate from another site.

```plaintext
Set-Cookie: SessionId=sYMnfCUrAlmqVVZn9dqevxyFpKZt30NN; SameSite=Strict;
```

<br />

> - The `Lax` value causes the browser to only include the cookie <br />
    if the request is a GET method and the request was initiated <br />
    by the user, not scripts.

```typescript
const express = require('express');
const session = require('express-session');
const app = express();

const sessionConfig = {
  secret: 'pjwq09!@#jmx',
  name: 'saturnbank',
  resave: false,
  saveUninitialized: false,
  store: store,
  cookie : {
    sameSite: 'strict',
  }
};
```

<br />
<br />



## $\textnormal{Renew Authentication for Security Critical Actions}$

> - On top, Saturn Bank should also introduce the need to renew <br />
    authentication whenever a user is doing a security critical <br />
    action, like changing passwords or transferring money.

> - If you ever wondered why some banking apps or online retailers <br />
    ask you to login so frequently.

<br />
<br />



## $\textnormal{Keep Learning}$

```plaintext
https://learn.snyk.io/lesson/csrf-attack/?loc=learn
https://www.youtube.com/watch?v=eWEgUcHPle0
```
