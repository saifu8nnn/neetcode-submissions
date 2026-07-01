class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        count_all={}
        for i in t:
            if i in count_all:
                count_all[i]+=1
            else:
                count_all[i]=1
        
        for i in s:
            if i in count_all:
                count_all[i]-=1
            else:
                return False
        
        for count in count_all.values():
            if count!=0:
                return False
        return True
        