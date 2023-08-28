class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)
        {
            return {{1}};
        }
        else
        {
            vector<vector<int>> ans = {{1},{1,1}};
            vector<int> temp;
            for(int i=3;i<=numRows;i++)
            {
                temp.clear();
                for(int j=0;j<i;j++)
                {
                    if(j==0)
                    {
                        temp.push_back(ans[i-2][j]);
                        cout << ans[i-2][j] << endl;
                    }
                    else if(j==i-1)
                    {
                        temp.push_back(ans[i-2][i-2]);
                        cout << ans[i-2][i-2] << endl;
                    }
                    else
                    {
                        temp.push_back(ans[i-2][j-1]+ans[i-2][j]);
                        cout << ans[i-2][j-1]+ans[i-2][j] << endl;
                    }
                }
                ans.push_back(temp);
            }
            return ans;
        }
        

    }
};