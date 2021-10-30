class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int X = 0;
      for(auto &operation : operations) {
        if(operation[0] == '+' || operation[2] == '+') {
          X++;
        } else {
          X--;
        }
      }
      
      return X;
    }
};
