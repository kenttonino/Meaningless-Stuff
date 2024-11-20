## $\textnormal{Broken Access Control Under the Hood}$

> - Student should not be able to edit their own grades, <br />
    but the API did not properly enforce role-based <br />
    restrictions on the server-side.

> - The underlying code might look something like this, <br />
    using the popular `Express` framework.

```typescript
const express = require('express')
const app = express()
const port = 3000

app.use(express.json())

app.get('/grades', (req, res) => {
    const lookup = {}
    lookup.studentID = req.query.studentid
    lookup.subjectID = req.query.subjectid
    const grade = getGrade(lookup)
    res.json(grade)
})

app.patch('/grades', (req, res) => {
    const grade = {}
    grade.studentID = req.body.studentid
    grade.subjectID = req.body.subjectid
    grade.grade = req.body.grade
    const response = updateGrade(grade)
    res.json(response)
})

function getGrade(grade) {
    const fromDB = lookupGradeInDB(grade)
    return fromDB
}

function updateGrade(grade) {
    const status = updateGradeInDB(grade)
    return status
}
```

> - Based on the code above, there are no access control restrictions.

> - As a result anyone who can send requests to the web <br />
    server can view the grades of all students.
