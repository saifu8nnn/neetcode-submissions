class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        ans=[0]*2
        for i in range(0,n):
            for j in range(i+1,n):
                if(nums[i]+nums[j]==target):
                    ans[0]=i
                    ans[1]=j
        return ans
                    
        