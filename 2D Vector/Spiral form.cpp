class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans;

        int row = matrix.size(), col = matrix[0].size();
        int top = 0, bottom = row - 1, right = col - 1, left = 0;

        while (left <= right && top <= bottom) {

            // Top row: left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // Right column: top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Bottom row: right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) { // Fixed: i--
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Left column: bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) { // Fixed: i--
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }  
        return ans;
    }
};