const parseJSAsync = require('./non-blocking-multiprocess')



async function main() {
  const result = await parseJSAsync('{ "a": 1 }')
  console.log('🤫 Dante ➤ main ➤ result', result)

}

main();
