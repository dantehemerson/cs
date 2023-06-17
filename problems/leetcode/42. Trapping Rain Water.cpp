class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        int sum = 0;

        while (l < r) {
            if (height[l] <= height[r]) {
                // sum the current water trap height
                sum += max(maxL - height[l], 0);
                // calculate maximum height of left items
                maxL = max(maxL, height[l]);
                l++; 
            } else {
                sum += max(maxR - height[r], 0);
                maxR = max(maxR, height[r]);
                r--;
            }
        }

        return sum;
    }
}
