function topKFrequent(nums: number[], k: number): number[] {
  const counter = new Map<number, number>()

  for(const num of nums) {
      counter.set(num, counter.has(num) ? counter.get(num) + 1 : 1);
  }

  return [...counter].sort(([, a], [, b])=> {
      return b - a;
  }).map(([key, value]) => {
      return key
  }).slice(0, k) as number[];
};
