class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> frequency;
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]]++;
        }
        for(auto i:frequency){
            if(i.second>=2)
            return true;
        }
        return false;
    }
};