function runningSum(nums: number[]): number[] {
    const result = []
    nums.reduce((sum, current) => {
        return result[result.push(sum + current) - 1]
    }, 0)
    return result
};
