function countConsistentStrings(allowed: string, words: string[]): number {
    const allowedSet = new Set<string>(allowed)
    
    return words.reduce((counter, word) => {
        if(word.split('').every(letter => allowedSet.has(letter))) {
            return ++counter
        }
        return counter
    }, 0)
};
