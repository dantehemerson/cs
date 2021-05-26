/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function(text) {
   
  const balloon = [
        ['b', 0],
        ['a', 0],
        ['l', 0],
        ['o', 0],
        ['n', 0]
    ]
    const map = new Map(balloon)
    for (const ch of text) 
        if (map.has(ch))
            map.set(ch, map.get(ch) + 1)
    map.set('l', map.get('l') / 2 >> 0)
    map.set('o', map.get('o') / 2 >> 0)
    
    return Math.min(...map.values())

};
