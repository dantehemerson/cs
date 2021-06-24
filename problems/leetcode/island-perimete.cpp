class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perm = 0;
        for(int i = 0; i < grid.size(); i++) {
          for(int j = 0; j < grid[i].size(); j++) {
            if(grid[i][j] == 1) {
              if(i == 0 || grid[i - 1][j] == 0) perm++;
              if(i == (grid.size() - 1) || grid[i + 1][j] == 0) perm++;
              
              if(j == 0 || grid[i][j - 1] == 0) perm++;
              if(j == (grid[0].size() - 1) || grid[i][j + 1] == 0) perm++;
            }
          }
        }
        
        return perm;
    }
};
