class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(s.insert("Row"+to_string(i)+to_string(board[i][j])).second == false || 
                       s.insert("Col"+to_string(j)+to_string(board[i][j])).second == false || 
                       s.insert("Box"+to_string((i/3)*3+ j/3)+to_string(board[i][j])).second == false)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
