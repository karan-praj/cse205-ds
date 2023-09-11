class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()/2;i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[matrix.size()-i-1][j];
                matrix[matrix.size()-i-1][j]=temp;
            }
        }
        vector<vector<int>> tran(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                tran[j][i] = matrix[i][j];
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j] = tran[i][j];
            }
        }
        
    }
};