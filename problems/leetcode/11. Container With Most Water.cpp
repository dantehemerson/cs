// Two pointers
class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int R = height.size() - 1;
        int maxArea = 0;

        while (L < R) {
            int currentMax = (R - L) * min(height[L], height[R]);
            maxArea = max(maxArea, currentMax);

            if (height[L] < height[R]) L++;
            else R--; 
        }

        return maxArea;
    }
};

class Solution {
public:
    // O(n^2): TLE
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        for(int i = 0; i < height.size() - 1; i++) {
            for(int j = i; j < height.size(); j++) {
                int currentMax = (j - i) * min(height[i], height[j]);
                maxArea = max(maxArea, currentMax);
            }
        }

        return maxArea;
    }
};

