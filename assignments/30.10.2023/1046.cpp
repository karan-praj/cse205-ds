class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            int value1 = stones.back();
            stones.pop_back();
            if(stones[stones.size()-1] == value1)
            {
                stones.pop_back();
            }
            else
                stones[stones.size()-1] = abs(stones[stones.size()-1] - value1);
            
        }
        if(stones.size()==0)
        {
            return 0;
        }
        return stones[0];
        
    }
};