import { binary_search } from '../binary_search'

describe('binary search', () => {
  test('Should return index in the middle', () => {
    const index = binary_search<number>([1, 2, 3, 4, 5], 3)
    expect(index).toBe(2)
  })

  test('Should return index at first', () => {
    const index = binary_search<number>([1, 2, 3, 4, 5], 1)
    expect(index).toBe(0)
  })


  test('Should return -1 if item not exists', () => {
    const index = binary_search<number>([1, 2, 3, 4, 5], 80)
    expect(index).toBe(-1)
  })
})
