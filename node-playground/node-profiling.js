'use strict';

process.title = 'Profiling';

/**
 *
 * autocannon node-playground/node-profiling.js
 *
 *
 */
const http = require('http');



http.createServer(function onRequest (request, response) {
  response.writeHead(200, { 'Content-Type': 'text/plain' });
  response.end('Hello World\n');
}).listen(3000);
