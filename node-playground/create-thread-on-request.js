const http = require('http');
const process = require('process');
const { Worker, parentPort, workerData } = require('worker_threads');


process.title = 'Profiling';

// Function to create a new worker and perform the time-consuming task
function createWorker() {
  const worker = new Worker(__filename, { workerData: null });

  worker.on('message', (message) => {
    console.log(`Worker completed: ${message}`);
		worker.terminate();
  });

  worker.postMessage('Start worker');
}

// Check if the code is running in the main thread
if (parentPort) {
  // This is the worker thread
  parentPort.on('message', (message) => {
    // Simulate a time-consuming task (e.g., 10 seconds)
    setTimeout(() => {
      parentPort.postMessage('Task completed');
    }, 10000);
  });
} else {
  // This is the main thread
  const server = http.createServer((req, res) => {
    if (req.url === '/') {
      // Request to the '/' endpoint
      createWorker();
      res.end('New worker thread started.');
    } else {
      res.writeHead(404);
      res.end('Not Found');
    }
  });

  const PORT = 3000;

  server.listen(PORT, () => {
    console.log(`Server is listening on port ${PORT}`);
  });
}
