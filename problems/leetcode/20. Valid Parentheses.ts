const closingChars = {
  ")": "(",
  "}": "{",
  "]":  "[" ,
}

function isValid(s: string): boolean {
  const openedChars: string[] = []

  for(const c of s) {
      if(["(", "{", "["].includes(c)) {
          openedChars.push(c)
      } else if([")", "}", "]"]) {
          if(openedChars?.[openedChars.length - 1] === closingChars[c]) {
              openedChars.pop()
          } else {
              return false
          }
      }
  }

  return openedChars.length === 0;
};
