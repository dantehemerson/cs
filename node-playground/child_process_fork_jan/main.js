const { spawn, fork } = require('child_process');

function callChildProcess(){
  const childProcess = fork(process.cwd() + '/node-playground/child_process_fork_jan/child-process.js');

  //Set a on-message handler to receive the outcome
  childProcess.on('message', (result) => {
        console.log(`Outcome : ${result}`);
        childProcess.kill('SIGTERM');
  });
  childProcess.on('close', (code) => {
        console.log(`child process exited with code ${code}`);
  });

  //Call the childProcess - for a cpu intensive task taking 5000ms.
  childProcess.send({"command" : "SLEEP", "responseTime" : 5000});
}

callChildProcess();
setTimeout(()=>{console.log("\nTest Parent Event-Loop :cpuIntensiveTask in child process does not block this event in parent process!")}
          ,1000);
