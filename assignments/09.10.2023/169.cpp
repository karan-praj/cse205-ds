class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,count2=0,val=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==nums[i-1])
            {
                if(count==0)
                {
                    count++;
                }
                count++;
            }
            else
            {
                count2=max(count2,count);
                if(count2==count)
                {
                    val = nums[i-1];
                }
                count=0;
                continue;
            }
            count2=max(count2,count);
            if(count2==count)
            {
                val = nums[i-1];
            }
        }
        return val;
    }
};