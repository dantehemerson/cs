const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});


rl.question('What do you think of Node.js: ', (answer) => {
  console.log('Thank you: ', answer)

  rl.close();
})
