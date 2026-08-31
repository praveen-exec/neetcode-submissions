// Approach 3 --> Bucket Sort ==> O(N)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int, int> mp; // {element, frequency}

        // Store frequency
        for(int x : nums) {
            mp[x]++;
        }

        // index = frequency
        // value = elements having that frequency
        vector<vector<int>> bucket(n + 1);

        for(auto &p : mp) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> ans;

        // Traverse frequency from highest to lowest
        for(int i = n; i >= 1; i--) {

            for(int x : bucket[i]) {

                ans.push_back(x);

                if(ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};