class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int> p;
        unordered_map<int,int> um;
        for(auto &i:nums){
            um[i]++;
        }
        priority_queue<p,vector<p>,greater<p>> pq;
        for(auto &i:um){
            int freq=i.second;
            int value=i.first;
            pq.push({freq,value});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
