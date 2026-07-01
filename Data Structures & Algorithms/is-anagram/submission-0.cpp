class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        bool result=true;
        vector<int>for_s(26,0);
        vector<int>for_t(26,0);
        for(int n:s){
            for_s[n - 'a']++;
        }
        for(int n:t){
            for_t[n - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(for_s[i]!=for_t[i]){
                result= false;
            }
        }
        return result;
    }
};
