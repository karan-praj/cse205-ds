class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",s2="";
        for(auto i:word1)
        {
            s= s+i;
        }
        for(auto i:word2)
        {
            s2=s2+i;
        }
        if(s==s2)
        {
            return true;
        }
        return false;
        
    }
};