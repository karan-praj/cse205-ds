class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int maxi =0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[0].size();j++)
            {
                sum =sum+accounts[i][j];
            }
            maxi = max(maxi,sum);
            sum=0;
        }
        return maxi;
    }
};