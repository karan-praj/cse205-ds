class Solution {
public:
    int minimumSum(int num) {
        vector<int>nums;
        while(num!=0)
        {
            nums.push_back(num%10);
            num=num/10;
        }
        sort(nums.begin(),nums.end());
        int num1=0,num2=0;
        for(int i=0;i<4;i++)
        {
            if(i==0)
            {
                num1=num1+(nums[i]*10);
            }
            if(i==2)
            {
                num1=num1+nums[i];
            }
            if(i==1)
            {
                num2=num2+(nums[i]*10);
            }
            if(i==3)
            {
                num2=num2+nums[i];
            }
        }
        cout << num1 << '\n' << num2 << endl;
        return num1+num2;
    }
};