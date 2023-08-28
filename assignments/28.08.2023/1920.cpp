class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(auto i: nums)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};