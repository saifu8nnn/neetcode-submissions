class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map={}
        for s in strs:
            sorted_s="".join(sorted(s))
            if sorted_s not in anagram_map:
                anagram_map[sorted_s]=[]
            anagram_map[sorted_s].append(s)
        ans=list(anagram_map.values())

        return ans


        
            