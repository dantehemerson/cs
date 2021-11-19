class Solution {
public:
    int hammingDistance(int x, int y) {
        int counter = 0;
        while(x || y) {
          if(x % 2 + y % 2 == 1) counter++;
          
          x >>= 1;
          y >>= 1;
        }
        return  counter;
    }
};

class Solution {
public:
    int hammingDistance(int x, int y) {
        int counter = 0;
        int n = x ^ y; // xor
        while (n) {
          counter++;
          n &= n - 1;
        }
        return  counter;
    }
};
