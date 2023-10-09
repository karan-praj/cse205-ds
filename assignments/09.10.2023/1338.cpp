class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int l = arr.size(); map<int,int> m; set<int> s; 
        for(int i=0; i<l; i++) {m[arr[i]]++; s.insert(arr[i]); }
        priority_queue<int> pq; 
        set<int>::iterator itr; 
        for(itr = s.begin(); itr != s.end(); itr++) pq.push(m[*itr]); 
        while(l > arr.size()/2 ){
            l -= pq.top(); pq.pop(); 
        }

        return s.size()-pq.size(); 
    }
};