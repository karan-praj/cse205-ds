class MyHashMap {
public:

    vector<int> k;
    vector<int> val;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(find(k.begin(),k.end(),key)==k.end())
        {
            k.push_back(key);
            val.push_back(value);
        }
        else
        {
            auto it = find(k.begin(),k.end(),key);
            int pos = it-k.begin();
            val[pos] = value;
        }
    }
    
    int get(int key) {
        if(find(k.begin(),k.end(),key)!=k.end())
        {
            auto it = find(k.begin(),k.end(),key);
            int pos = it-k.begin();
            return val[pos];
        }
        return -1;
    }
    
    void remove(int key) {
        if(find(k.begin(),k.end(),key)!=k.end())
        {
            auto it = find(k.begin(),k.end(),key);
            int pos = it-k.begin();
            k.erase(it);
            val.erase(val.begin()+pos);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */