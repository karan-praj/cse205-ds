class Solution {
public:
void solve(vector<vector<int>>& ans,vector<int>& result,vector<int>& candidates,int target,int i,int sum)
{
    if(sum>target)
    {
        return;
    }
    if(i==candidates.size())
    {
        if(sum==target)
        {
            ans.push_back(result);
        }
        return;
    }
    // incllude
    sum=sum+candidates[i];
    result.push_back(candidates[i]);
    solve(ans,result,candidates,target,i,sum);
    sum=sum-candidates[i];
    result.pop_back();
    // exclude
    solve(ans,result,candidates,target,i+1,sum);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(ans,res,candidates,target,0,0);
        return ans;
    }
};