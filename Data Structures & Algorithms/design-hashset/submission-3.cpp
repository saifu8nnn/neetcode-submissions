class MyHashSet {
public:
    vector<list<int>> vec;
    int M;
    int getindex(int key){
        return key%M;
    }
    MyHashSet() {
        M=15000;
        vec=vector<list<int>>(M,list<int>{});
    }
    
    void add(int key) {
        int index=getindex(key);
        auto itr=find(vec[index].begin(),vec[index].end(),key);
        if(itr==vec[index].end())
        vec[index].push_back(key);
    }
    
    void remove(int key) {
        int index=getindex(key);
        auto itr=find(vec[index].begin(),vec[index].end(),key);
        if(itr!=vec[index].end()){
            vec[index].erase(itr);
        }
    }
    
    bool contains(int key) {
        int index=getindex(key);
        auto itr=find(vec[index].begin(),vec[index].end(),key);
        return itr!=vec[index].end();
    }
};
