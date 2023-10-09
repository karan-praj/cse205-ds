class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum=0,left=money,count=0;
        for(int i=0;i<prices.size();i++)
        {
            if(count==2)
            {
                break;
            }
            count++;
            sum=sum+prices[i];
            left=left-prices[i];
        }
        if(left>=0)
        {
            return left;
        }
        return money;
    }
};