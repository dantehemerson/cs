export function binary_search<T>(arr: T[], item: T) {
  let Lindex = 0
  let Rindex = arr.length - 1
  let index
  while(Lindex <= Rindex) {
    index = Math.floor((Lindex + Rindex) / 2)

    const itemAtIndex = arr[index]

    if(itemAtIndex < item) {
      Lindex = index + 1
    } else if(itemAtIndex > item) {
      Rindex = index - 1
    } else { // Finded
      return index
    }
  }

  return -1 // Not found indicator
}
