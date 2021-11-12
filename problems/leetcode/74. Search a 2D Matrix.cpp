class Solution {
public:

  bool binarySearch(vector<vector<int>>& arr, int l, int r, int target) {      
      while (l <= r) {
          int m = l + (r - l) / 2;
          
          // This is the diference with binary search in 1D array, transform 1D index into 2D index
          int x = m / arr[0].size();
          int y = m % arr[0].size();
        
          if (arr[x][y] == target)
              return true;

          if (arr[x][y] < target)
              l = m + 1;
          else
              r = m - 1;
      }

      return false;
    }
  
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return binarySearch(matrix, 0, matrix.size() * matrix[0].size() - 1, target);
    }
};
