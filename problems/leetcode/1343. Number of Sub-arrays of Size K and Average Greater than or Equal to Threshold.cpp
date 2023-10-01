class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long double sum = 0;
        for (int i = 0; i < k - 1; i++) {
            sum += arr[i];
        }

        int l = 0;
        int r = k - 1;

        int result = 0;

        while (r < arr.size()) {
            sum += arr[r];

            long double avg = sum / k;

            if (avg >= threshold) {
                result++;
            }

            sum -= arr[l];

            r++;
            l++;
        }

        return result;
    }
};
