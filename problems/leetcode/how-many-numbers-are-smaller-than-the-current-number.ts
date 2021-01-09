function smallerNumbersThanCurrent(nums: number[]): number[] { 
    return nums.map((itemI, indexI) => {
        return nums.filter((itemJ, indexJ) => itemJ < itemI).length
    })
};
