// This activity will focus on fetching the page for the google as sort of a pending operations.

const https = require("https")
const process = require("node:process")

const start = Date.now()

function doRequest(operationName) {
  https.request('https://www.google.com', res => {
    res.on("data", () => {})
    res.on("end", () => {
      console.log(operationName, Date.now() - start)
    })
  }).end()
}

doRequest('Operation #1:')
doRequest('Operation #2:')
doRequest('Operation #3:')
doRequest('Operation #4:')
doRequest('Operation #5:')
doRequest('Operation #6:')
doRequest('Operation #7:')

// Record the total time.
process.on("exit", () => {
  console.log("Total Time:", Date.now() - start)
})
