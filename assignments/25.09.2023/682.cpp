class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> store;
        int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]!="C" && operations[i]!="D" && operations[i]!="+")
            {
                store.push(stoi(operations[i]));
            }
            if(operations[i]=="C")
            {
                if(!store.empty())
                {
                    store.pop();
                }
            }
            if(operations[i]=="D")
            {
                if(!store.empty())
                    store.push(store.top()*2);
            }
            if(operations[i]=="+")
            {
                if(store.size()>=2)
                {
                    int prev = store.top();
                    store.pop();
                    int prev2 = store.top();
                    store.push(prev);
                    store.push(prev2+prev);
                }
                
            }
            
        }
        while(!store.empty())
        {
            sum+=store.top();
            store.pop();
        }
        return sum;
    }
};