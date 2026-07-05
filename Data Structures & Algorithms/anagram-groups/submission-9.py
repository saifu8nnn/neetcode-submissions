class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group=[]
        
        for str in strs:
           found=False
           for i in group:
            if sorted(str)==sorted(i[0]):
                i.append(str)
                found=True
                break
           if not found:
            group.append([str])
        return group 