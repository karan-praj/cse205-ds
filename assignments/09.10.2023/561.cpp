class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> temp;
        int sum=0;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)
        {
            temp.push_back(nums[i]);
            temp.push_back(nums[i+1]);
            ans.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<=0;i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                sum=sum+ans[j][i];
            }
        }
        return sum;
    }
};