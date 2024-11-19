const https = require("https")
const process = require("node:process")
const crypto = require("crypto")
const fs = require("fs")

// Baseline time.
const start = Date.now()

// Handle by the operating system.
function doRequest(requestName) {
  https.request('https://www.google.com', res => {
    res.on("data", () => {})
    res.on("end", () => {
      console.log(requestName, Date.now() - start)
    })
  }).end()
}

// Handle by the threadpool.
function doHash(hashName) {
  crypto.pbkdf2("a", "b", 100000, 512, 'sha512', () => {
    // This will return time based on milliseconds.
    console.log(hashName, Date.now() - start)
  })
}

doRequest("Request #1:");

fs.readFile('multitask.js', 'utf8', () => {
  console.log("FileSystem:", Date.now() - start)
})

doHash("Hash #1:")
doHash("Hash #2:")
doHash("Hash #3:")
doHash("Hash #4:")

// Record the total time.
process.on("exit", () => {
  console.log("Total Time:", Date.now() - start)
})
