class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> s;
        vector<int>temp = score;
        int index=0;
        sort(temp.begin(),temp.end(),greater<int>());
        for(int i=0;i<score.size();i++)
        {
            auto it = find(temp.begin(), temp.end(), score[i]);
            index = it - temp.begin();
            if(index==0)
            {
                s.push_back("Gold Medal");
            }
            else if(index==1)
            {
                s.push_back("Silver Medal");
            }
            else if(index==2)
            {
                s.push_back("Bronze Medal");
            }
            else
            {
                s.push_back(to_string(index+1));
            }
        }
        return s;
    }
};