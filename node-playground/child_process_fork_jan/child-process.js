function cpuIntensiveTask(responseTime){
  console.log("cpuIntensiveTask started......")
  let startTime=Date.now();
  while(Date.now()-startTime<responseTime){}
  console.log("cpuIntensiveTask completed in :" + (Date.now()-startTime) +" ms.")
  return (Date.now()-startTime);
}

process.on('message', (message) => {
  console.log(message);
  if(message.command=='SLEEP'){
    setTimeout(()=>{console.log("\nTest Child process Event-Loop :cpuIntensiveTask in child process blocks this event in child thread!")}
              ,1000);

    const result = cpuIntensiveTask(message.responseTime);
    process.send("Completed in :"+ result +" ms.");
  }
});
