class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> res;
       for(auto &i:strs){
       string s=i;
       sort(s.begin(),s.end());
       res[s].push_back(i);
       }
       vector<vector<string>> result;
       for(auto & i: res){
        result.push_back(i.second);
       }
       return result;
    }
};
