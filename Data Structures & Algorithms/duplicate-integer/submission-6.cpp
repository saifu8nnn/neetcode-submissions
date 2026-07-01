class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(size(nums)==0)return false;
        sort(nums.begin(),nums.end());
        bool result=false;
        for(int i=0;i<size(nums)-1;i++){
          if(nums[i]==nums[i+1]){
            result=true;
        }
       
    }
     return result;

    }
};