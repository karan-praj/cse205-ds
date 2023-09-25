class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     stack<int> s;
     vector<int> x(nums);
     int h=nums.size();
     s.push(-1);
     for(int i=2*h-1;i>=0;i--){
         while(!s.empty() && s.top()<=nums[i%h]){
             s.pop();
         }
         if(s.empty()){s.push(-1);}
         x[i%h]=s.top();
         s.push(nums[i%h]);
     }
     return x;
    }
};