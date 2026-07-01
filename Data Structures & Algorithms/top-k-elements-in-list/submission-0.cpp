class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> um;
        for(auto &i:nums){
            um[i]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &i:um){
            int element=i.first;
            int freq=i.second;
            bucket[freq].push_back(element);
        }
        vector<int> result;
        for(int i=n;i>0;i--){
            if(bucket[i].size()==0)
            continue;
            while(bucket[i].size()>0&&k>0){
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return result;
    }
};
