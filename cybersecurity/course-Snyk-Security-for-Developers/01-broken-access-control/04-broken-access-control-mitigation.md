## $\textnormal{Broken Access Control Mitigation}$

> - Permissions structures still need to be implemented by <br />
    the developer, because every application has specific, <br />
    custom requirements.

> - If we were to implement some rudimentary access control <br />
    on the `GET` endpoint in the code above, it might look <br />
    something like this:

```typescript
app.get('/grades', (req, res) => {
    res.setHeader('Content-Type', 'application/json')

    // Access Control
    if (getCurrentUser().studentID != req.query.studentid) {
        var response = {}
        response.message = "Access Denied"
        res.json(response)
        return false
    }

    var lookup = {}
    lookup.studentID = req.query.studentid
    lookup.subjectID = req.query.subjectid
    grade = getGrade(lookup)
    json = JSON.stringify(grade)
    res.send(json)
})
```

> - In the above case, the `get_student_id()` function would <br />
    return the student ID if the currently authenticated user, <br />
    based on the session token.

> - If the user's ID is not the same as the ID they are requesting, <br />
    then it will return a `Forbidden` message instead of the grade <br />
    details

> - We want teachers to be able to upgrade the grades, but not <br />
    students.

> - In this instance, we need to implement role-based permissions.

```typescript
app.patch('/grades', (req, res) => {
    res.setHeader('Content-Type', 'application/json')

    // Access Control
    if (getCurrentUser().role != "teacher") {
        var response = {}
        response.message = "Access Denied"
        res.send(JSON.stringify(response))
        return false
    }

    var grade = {}
    grade.studentID = req.body.studentID
    grade.subjectID = req.body.subjectID
    grade.grade = req.body.grade
    response = updateGrade(grade)
    json = JSON.stringify(response)
    res.send(json)
})
```

> - The code above will return an `Access Denied` message unless the <br />
    user's role is set to `teacher`.
