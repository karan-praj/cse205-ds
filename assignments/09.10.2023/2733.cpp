class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = nums[0],max = nums[nums.size()-1];
        for(auto i : nums)
        {
            if(i!=min && i!=max)
            {
                return i;
            }
        }
        return -1;
    }
};