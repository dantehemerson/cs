function countConsistentStrings(allowed: string, words: string[]): number {
    const allowedSet = new Set<string>(allowed.split(""))
    
    return words.reduce((counter, word) => {
        const uniqLetters = new Set<string>(word.split(""))
        if(Array.from(uniqLetters).every(letter => allowedSet.has(letter))) {
            return ++counter
        }
        return counter
    }, 0)
};
