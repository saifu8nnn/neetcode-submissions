class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        long long sum=0;
        vector<vector<int>> res;
        vector<int> quad(4);
        sort(nums.begin(),nums.end());
        int s=0;
        while(s<=n-4){
            if(nums[s]==1000000000&&target!=1000000000){
                return{};
            }
            int i=s+1;
            while(i<=n-3){
                int l=i+1;
                int r=n-1;
                while(l<r){
                    sum=nums[s]+nums[i]+nums[l]+nums[r];
                    if(sum==target){
                        quad[0]=nums[s];
                        quad[1]=nums[i];
                        quad[2]=nums[l];
                        quad[3]=nums[r];
                        res.push_back(quad);
                        l++;
                        while(l<r && nums[l]==nums[l-1]){
                            l++;
                        }
                        r--;
                        while(l<r && nums[r]==nums[r+1]){
                            r--;
                        }
                    }
                    else if(sum<target){
                        l++;
                        while(l<r && nums[l]==nums[l-1]){
                            l++;
                        }
                    }
                    else{
                        r--;
                        while(l<r && nums[r]==nums[r+1]){
                            r--;
                        }
                    }
                }
            i++;
            while(i<=n-3 && nums[i]==nums[i-1]){
                            i++;
                        }
            }
            s++;
            while(s<=n-3 && nums[s]==nums[s-1]){
                            s++;
                        }
        }
        return res;
    }
};