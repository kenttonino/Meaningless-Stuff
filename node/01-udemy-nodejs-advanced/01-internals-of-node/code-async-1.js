// This activity will focus on fetching the page for the google as sort of a pending operations.

const https = require("https")

const start = Date.now()

// SAMPLE #1
https.request('https://www.google.com', res => {
  res.on("data", () => {})
  res.on("end", () => {
    console.log("Operation #1:", Date.now() - start)
  })
}).end()
