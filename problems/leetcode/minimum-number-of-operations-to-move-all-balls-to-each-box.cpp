class Solution {
public:
    vector<int> minOperations(string boxes) {
      set<int> positions;
      vector<int> result;
      int sum = 0;
      for(int i = 0; i < boxes.size(); i++) {
        if(boxes[i] == '1') {
          positions.insert(i);
        }
      }


      for(int i = 0; i < boxes.size(); i++) {
        sum = 0;
        for(auto it = positions.begin(); it != positions.end(); it++) {
          if(*it != i) sum += abs(*it - i);
        }
        result.push_back(sum);
      }

      return result;
    }
};
