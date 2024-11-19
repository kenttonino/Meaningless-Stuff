## $\textnormal{What is Prototype in JavaScript?}$

> - When we create an empty object in JavaScript <br />
    (for example, `const obj = {}`), the created <br />
    object already has many attributes and methods <br />
    defined for it, for instance, the toString method.

> - This attributes come from `prototype`.

> - JavaScript, instead, is a `prototype-based` <br />
    object-oriented programming language.

> - Each object is linked to a “prototype”.

> - When we invoke the toString method on an object, <br />
    JavaScript will first check to see if we explicitly <br />
    defined the method for the given object.

> - If we haven’t, it will look for its definition on <br />
    the object’s prototype.

> - Refer to sample [code](./code/main.js).

> - Below is a shared default prototype.

```typescript
const a = {};
const b = new Object();

// True.
console.log(a.__proto__ === b.__proto__);
```

<br />

> - Setting attribute on a shared prototype.

```typescript
const a = {};
const b = new Object();
a.__proto__.x = 1337;

// 1337.
console.log(b.x);
```

<br />
<br />



## $\textnormal{Prototype Pollution Explained}$

> - The bottom line is--if we modify a prototype shared by <br />
    two or more objects, all objects will reflect this <br />
    modification! They don’t even have to be in the same <br />
    scope or otherwise related.

| Prototype Pollution Attack Illustration |
| --------------------------------------- |
| ![prototype-pollution-attack-illustration](./images/02-prototype-pollution-attack.png) |

<br />

```typescript
async function updateUser(userId, requestBody) {
  const userData = await db.loadUserData(userId);

  // The merge function sets all the requestBody object attributes on the userData object.
  // This is where the prototype gets polluted.
  merge(userData, requestBody);

  log("Saving userData " + userData.toString());
  await db.saveUserData(userId, userData);
  return userData;
}

async function getRole(userId) {
  const userPermissions = await db.loadUserPermissions(userId);

  let role = "user";
  if (userPermissions.role) {
    role = userPermissions.role;
  }

  return { role };
}

/**
 * Sets or updates all attributes of the source object on the target object.
 *
 * For example if `target` is {a: 1, b: 2} and `source` is {a: 3, c: 4},
 * after calling this function `target` becomes {a: 3, b: 2, c: 4}.
 */
function merge(target, source) {
  for (const attr in source) {
    if (
      typeof target[attr] === "object" &&
      typeof source[attr] === "object"
    ) {
      merge(target[attr], source[attr])
    } else {
      target[attr] = source[attr]
    }
  }
}
```
