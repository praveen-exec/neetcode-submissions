class Solution {
   public:
    bool binarySearch(vector<int>& temp, int target) {
        int start = 0, end = temp.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (temp[mid] == target)
                return true;
            else if (temp[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (binarySearch(matrix[i], target)) return true;
        }

        return false;
    }
};
