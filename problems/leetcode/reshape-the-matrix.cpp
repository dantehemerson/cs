class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r * c != mat.size() * mat[0].size()) {
          return mat;
        }
      
        vector<vector<int>> result(r);
        auto rowVec = 0;
        for(size_t i = 0; i < mat.size(); i++) {
          for(size_t j = 0; j < mat[i].size(); j++) {
            if(result[rowVec].size() >= c) {
                rowVec++;
            }
            result[rowVec].push_back(mat[i][j]);  
          }
        }
        return result;
    }
};


// Alternative solution, No more efficient 
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r * c != mat.size() * mat[0].size()) {
          return mat;
        }
      
        vector<vector<int>> result(r, vector<int>(c));
        size_t resultI = 0, resultJ = 0;
        for(size_t i = 0; i < mat.size(); i++) {
          for(size_t j = 0; j < mat[i].size(); j++) {
            if(resultJ >= c) {
                resultI++;
                resultJ = 0;
            }
            result[resultI][resultJ++] = mat[i][j];  
          }
        }
        return result;
    }
};
