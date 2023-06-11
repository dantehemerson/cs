function twoSum(numbers: number[], target: number): number[] {
  let i: number = 0;
  let j: number = numbers.length - 1;

  while(numbers[i] + numbers[j] !== target) {
    if(numbers[i] + numbers[j] > target) {
      j--;
    } else {
      i++;
    }
  }

  return [i + 1, j + 1];
}
