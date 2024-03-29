/**
* O(n) solution
16 ms	12.3 MB
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> positions;

      for(int i = 0; i < nums.size(); i++) {
        positions[target - nums[i]] = i;
      }

      for(int i = 0; i < nums.size(); i++) {
        if(positions.count(nums[i]) && positions[nums[i]] != i) {
          return { positions[nums[i]], i};
        }
      }
      return {};
    }
};


/**
O(n)
Runtime: 8 ms, faster than 95.31% of C++ online submissions for Two Sum.
Memory Usage: 11.3 MB, less than 18.29% of C++ online submissions for Two Sum.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> rests;
      for (int i = 0; i < nums.size(); i++) {
        int missing = target - nums[i];

        if (rests.count(missing)) {
          return {rests[missing], i};
        } else {
          rests[nums[i]] = i;
        }
      }
      return {}; // Never gets here
    }
};




/* Typescript */
function twoSum(nums: number[], target: number): number[] {
    const indexes = {};

    for(let i = 0; i < nums.length; i++) {
        indexes[nums[i]] = i;
    }

    for(let i = 0; i < nums.length - 1; i++) {
        const m = target - nums[i];
        if(indexes[m] !== undefined && indexes[m] !== i) {
            return [i, indexes[m]];
        }
    }
};




// One pass typescript
function twoSum(nums: number[], target: number): number[] {
    const complements = {};

    for(let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];

        if(complements[complement] !== undefined) {
            return [i, complements[complement]];
        }

        complements[nums[i]] = i;
    }
}
