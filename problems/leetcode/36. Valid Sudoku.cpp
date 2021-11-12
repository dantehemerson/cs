class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, bool> counter;
        for(int i = 0; i < 9; i++) {
          for(int j = 0; j < 9; j++) {
            string h = "h_" + to_string(i) + "_" + string(1, board[j][i]);
            string v = "v_"  + to_string(i) + "_" + string(1, board[i][j]);
            string c = "c_"  + to_string(i/3) + to_string(j/3) + "_" + string(1, board[i][j]);
            
            if(counter[h] || counter[v] || counter[c]) return false;
            
            if(board[i][j] != '.') {
              counter[c] = true;    
              counter[v] = true;  
            }
            // cout << j << "," << i << " = " << board[j][i] << endl;
            if(board[j][i] != '.') {
              
              counter[h] = true;  
            }
          }
        }
      
        // for(auto it = counter.cbegin(); it != counter.cend(); ++it)
        // {
        //     std::cout << it->first << " -> " << it->second << "\n";
        // }
        return true;
    }
};
