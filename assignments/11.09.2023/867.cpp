class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();    // Number of rows in the original matrix
        int n = matrix[0].size(); // Number of columns in the original matrix
        
        // Initialize the transpose matrix with dimensions n x m
        vector<vector<int>> transpose(n, vector<int>(m, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
};
