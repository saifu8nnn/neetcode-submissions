class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int l=0;
        int r=0;
        int maxi=0;
        while(r<s.size()){
            if(map.find(s[r])!=map.end()){
               maxi=max(maxi,r-l);
               l=max(l,map[s[r]]+1);
            }
            map[s[r]]=r;
            r++;
            maxi=max(maxi,r-l);
        }
        return maxi;
    }
};
