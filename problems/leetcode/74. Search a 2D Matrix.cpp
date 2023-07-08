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



// Recursive solution:

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totalItems = matrix[0].size() * matrix.size();
        return binarySearchMatrix(matrix, target, 0, totalItems - 1);
    }

    bool binarySearchMatrix(vector<vector<int>>& matrix, int target, int L, int R) {
        if (R >= L) {
            int midIndex = L + (R - L) /2;

            int x = midIndex/matrix[0].size();
            int y = midIndex - x * matrix[0].size();

            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] > target ) {
                return binarySearchMatrix(matrix, target, L, R - 1);
            } else {
                return binarySearchMatrix(matrix, target, L + 1, R);
            }
        }

        return false;
    }
};
