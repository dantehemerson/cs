function numberOfSteps (num: number): number {
    let counter = 0
    while(num !== 0) {
        num % 2 == 0 ? num /= 2 : num--
        counter++
    }

    return counter
};
