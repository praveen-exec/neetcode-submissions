class Solution {
public:
    vector<int> dp;
    int rob_prob(vector<int>& nums, int n) {

        // No house
        if(n < 0)
            return 0;

        if(dp[n] != -1) return dp[n];

        // Two choices:
        // 1. Rob current house
        int take = nums[n] + rob_prob(nums, n - 2);

        // 2. Skip current house
        int skip = rob_prob(nums, n - 1);

        dp[n] = max(take, skip);

        return dp[n];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        dp.resize(n+1,-1);
        return rob_prob(nums, n - 1);
    }
};