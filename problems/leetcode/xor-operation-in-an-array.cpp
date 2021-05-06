class Solution {
public:
    int xorOperation(int n, int start) {
      int sor = start;

      for(size_t i = 1; i < n; i++) {
        sor = sor ^ (start + 2 * i);
      }
      
      return sor;
    }
};
