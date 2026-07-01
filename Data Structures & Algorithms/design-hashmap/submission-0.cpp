class MyHashMap {
public:
    typedef pair<int,int> p;

    int m;
    vector<list<p>> bucket;

    int gethash(int key){
        return key%m;
    }
    
    MyHashMap() {
        m=10001;
        bucket.resize(m);
    }
    
    void put(int key, int value) {
        int index=gethash(key);
        auto &chain=bucket[index];
        for(auto&it:chain){
            if(it.first==key){
                it.second=value;
                return;
            }
        }
        chain.emplace_back(key,value);
    }
    
    int get(int key) {
        int index=gethash(key);
        auto &chain=bucket[index];
        if(chain.empty())
        return -1;
        for(auto&it:chain){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index=gethash(key);
        auto &chain=bucket[index];
        for(auto it=chain.begin();it!=chain.end();it++){
            if(it->first==key){
                chain.erase(it);
                return;
            }
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