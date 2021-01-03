function maximumWealth(accounts: number[][]): number {
    const sums: number[] = accounts.map(account => {
        return account.reduce((sum, current) => sum + current, 0)
    })
    
    return Math.max(...sums)
};
