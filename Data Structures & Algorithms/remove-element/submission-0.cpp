class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> removed;
        for(auto i:nums){
            if(i!=val)
            removed.push_back(i);
        }
        for(int i=0;i<removed.size();i++){
            nums[i]=removed[i];
        }
      return removed.size();
    }
};