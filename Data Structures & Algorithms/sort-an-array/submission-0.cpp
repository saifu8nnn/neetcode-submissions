class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> mh;
        for(auto i:nums){
            mh.push(i);
        }
        vector<int> res;
        while(!mh.empty()){
            res.push_back(mh.top());
            mh.pop();
        }
        return res;

    }
};