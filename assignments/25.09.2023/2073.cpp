class Solution {
public:
	int timeRequiredToBuy(vector<int>& t, int k) {
		int time=0;
		while(1){
			for(int i=0;i<t.size();i++){
				if(t[i]>0){
					t[i]--;
					time++;
					if(t[k]==0)return time;
				}
			}
		}
		return -1;
	}
};