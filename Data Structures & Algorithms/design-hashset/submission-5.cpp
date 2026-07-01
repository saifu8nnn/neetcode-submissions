class MyHashSet {
public:
    int m;
    vector<list<int>> vec;
    int getindex(int key){
        return key%m;
    }
    MyHashSet() {
        int m=15000;
        vec=vector<list<int>>(m);
    }
    
    void add(int key) {
        int index=getindex(key);
        auto itr=find(vec[index].begin(),vec[index].end(),key);
        if(itr==vec[index].end()){
            vec[index].push_back(key);
        }
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
        if(itr!=vec[index].end()){
            return true;
        }
        else return false;
    }
};
