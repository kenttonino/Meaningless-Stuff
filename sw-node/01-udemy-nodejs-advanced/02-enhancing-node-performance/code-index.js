const express = require("express")
const app = express()

// Duration is in milliseconds.
function doWork(duration) {
  const start = Date.now()

  while (Date.now() - start < duration) {
  }
}

app.get("/", (req, res) => {
  // This code will be executed by the event loop.
  // This is blocking process.
  doWork(5000)

  res.send('Hello World!');
})

app.listen(3000);
