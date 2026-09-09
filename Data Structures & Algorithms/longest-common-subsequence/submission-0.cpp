class Solution {
public:
    vector<vector<int>> dp;

    int LCS(string text1, string text2, int m, int n) {

        // Base Case
        if (m == 0 || n == 0)
            return 0;

        // Already calculated
        if (dp[m][n] != -1)
            return dp[m][n];

        // Last characters match
        if (text1[m - 1] == text2[n - 1]) {
            dp[m][n] = 1 + LCS(text1, text2, m - 1, n - 1);
        }
        else {
            dp[m][n] = max(
                LCS(text1, text2, m - 1, n),
                LCS(text1, text2, m, n - 1)
            );
        }

        return dp[m][n];
    }

    int longestCommonSubsequence(string text1, string text2) {

        int m = text1.size();
        int n = text2.size();

        // Create DP table
        dp.resize(m + 1, vector<int>(n + 1, -1));

        return LCS(text1, text2, m, n);
    }
};