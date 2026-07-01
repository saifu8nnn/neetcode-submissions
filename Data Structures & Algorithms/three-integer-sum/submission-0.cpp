class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
        vector<int> arr(3);
        vector<vector<int>> result;
        while(i<n-2){
             int l=i+1;
             int r=n-1;
             while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum<0){
                    l++;
                    while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                }
                else if(sum>0){
                    r--;
                    while(l<r && nums[r]==nums[r+1]){
                        r--;
                    }
                }
                else {
                    arr[0]=nums[i];
                    arr[1]=nums[l];
                    arr[2]=nums[r];
                    l++;
                    r--;
                    result.push_back(arr);
                    while(l<r && nums[r]==nums[r+1]){
                        r--;
                    }
                     while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                }
             }
             i++;
             while(i<n-2 && nums[i]==nums[i-1]){
                        i++;
                    }
             
        }
        return result;
    }
};
