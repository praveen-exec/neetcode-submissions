class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.count(x)) {
                return true;  // Duplicate found
            }
            seen.insert(x);
        }

        return false;
    }
};
