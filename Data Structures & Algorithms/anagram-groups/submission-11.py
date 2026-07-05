class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map=defaultdict(list)
        for str in strs:
            anagram_map["".join(sorted(str))].append(str)
        return list(anagram_map.values())