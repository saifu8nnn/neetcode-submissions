class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //length of the array nums
       int n= size(nums);
       vector<int> arr(2*n);
       for(int i=0;i<n;i++){
        arr[i]=nums[i];
        arr[i+n]=nums[i];
       }
       return arr;
    }
};