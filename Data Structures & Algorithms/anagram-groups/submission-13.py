class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group=[]
        
        for s in strs:
            sorted_s=sorted(s)
            found=False
            for i in group:
                if sorted(i[0]) == sorted_s:
                    i.append(s)
                    found=True
            if not found:
                group.append([s])
        
        return group

