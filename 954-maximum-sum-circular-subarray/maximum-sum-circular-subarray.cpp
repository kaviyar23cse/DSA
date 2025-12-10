class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = INT_MIN, curMax = 0;
        int minSum = INT_MAX, curMin = 0;

        for (int x : nums) {
            total += x;

            curMax = max(curMax + x, x);
            maxSum = max(maxSum, curMax);

            curMin = min(curMin + x, x);
            minSum = min(minSum, curMin);
        }

        if (maxSum < 0) return maxSum;

        return max(maxSum, total - minSum);
    }
};
