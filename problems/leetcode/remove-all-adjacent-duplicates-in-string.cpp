class Solution {
public:
    // with STL stack
  // Runtime: 380 ms, faster than 5.84% of C++ online submissions for Remove All Adjacent Duplicates In String.
// Memory Usage: 779.5 MB, less than 6.46% of C++ online submissions for Remove All Adjacent Duplicates In String.
//     string removeDuplicates(string s) {
//         stack<char> cars;
//         string result = "";
//          for(const char &c: s) {
//            if(!cars.empty() && c == cars.top()) {
//              cars.pop();
//            } else {
//              cars.push(c);
//            }
//         }
        
//         while(!cars.empty()) {
//           result = cars.top() + result;
//           cars.pop();
//         }
        
//         return result;
//     }
  
  
    // with string as stack(better solution)
  //  Runtime: 12 ms, faster than 96.01% of C++ online submissions for Remove All Adjacent Duplicates In String.
// Memory Usage: 10 MB, less than 84.62% of C++ online submissions for Remove All Adjacent Duplicates In String.
    string removeDuplicates(string s) {
        string result = "";
         for(const char &c: s) {
           if(c == result.back()) {
             result.pop_back();
           } else {
             result.push_back(c);
           }
        }
        
        return result;
    }
  
//     string removeDuplicates(string s) {
//         for(int i = 0; i + 1 < s.size(); i++) { 
//           if(s[i] == s[i + 1]) {
//              s.erase(i, 2);
//              i = max(i - 1, 0);
//           }
         
//         }
        
//         return s;
//     }
};
