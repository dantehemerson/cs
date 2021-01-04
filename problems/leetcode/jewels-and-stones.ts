function numJewelsInStones(jewels: string, stones: string): number {
    // fast find
    const jewelsSet = new Set(jewels.split(''))
    
    return stones.split('').reduce((sum, current) => {
        return sum + (jewelsSet.has(current) ? 1 : 0)
    }, 0)
};
