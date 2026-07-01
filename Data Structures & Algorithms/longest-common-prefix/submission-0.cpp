class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        if (strs.empty())return result;
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        for(int i=0;i<first.length();i++){
           if(first[i]==last[i]){
            result+=first[i];
           }
           else break;
        }
        return result;
    }
};