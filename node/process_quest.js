
process.on('exit', () => {
  console.log('[exit] handler');
})


process.on('beforeExit', () => {
  console.log('[beforeExit] handler');
})



console.log('Hello')
