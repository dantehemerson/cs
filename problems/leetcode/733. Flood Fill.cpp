class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) return image;
      
        paint(image, sr, sc, image[sr][sc], newColor);

        return image;
    }
  
    void paint(vector<vector<int>>& image, int sr, int sc, int actualColor, int newColor) {
      if(sr < 0 || sr > image.size() - 1 || sc < 0 || sc > image[0].size() -1) {
        return;
      }

      if(image[sr][sc] == actualColor) {
        image[sr][sc] = newColor;
        paint(image, sr - 1, sc, actualColor, newColor);
        paint(image, sr + 1, sc, actualColor, newColor);
        paint(image, sr, sc - 1, actualColor, newColor);
        paint(image, sr, sc + 1, actualColor, newColor);
      }
    }
};
