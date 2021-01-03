function shuffle(nums: number[], n: number): number[] {
    const result: number[] = []
    const totalPairs = nums.length/2
    for(let i = 0; i < totalPairs; i++) {
        result.push(nums[i], nums[i + totalPairs])
    }
    return result
}
