class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a.size() != b.size()) return false;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<bool> visited(n, false);
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;

            vector<string> group;
            //push the first string
            group.push_back(strs[i]);
            visited[i] = true;

            for (int j = i; j < n; j++) {
                if (!visited[j] && isAnagram(strs[i], strs[j])) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};

//O(n^2 * klogk) time 
