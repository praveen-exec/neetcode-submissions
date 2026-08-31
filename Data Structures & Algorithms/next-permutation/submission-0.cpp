class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakpoint = -1;

        // Step 1: Find the breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakpoint = i;
                break;
            }
        }

        // If no breakpoint, this is the last permutation
        if (breakpoint == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the smallest element greater than nums[breakpoint]
        // Since the suffix is decreasing, the first from the right works.
        for (int i = n - 1; i > breakpoint; i--) {
            if (nums[i] > nums[breakpoint]) {
                swap(nums[i], nums[breakpoint]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + breakpoint + 1, nums.end());
    }
};