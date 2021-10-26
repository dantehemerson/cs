class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        int i = A.size() - 1;

        do {
          if(i >= 0) {
            A[i] = (A[i] + 1) % 10;   
          } else {
            A.insert(A.begin(), 1);
          }
        } while(i >= 0 && A[i--] == 0);
      
        return A;
    }
};
