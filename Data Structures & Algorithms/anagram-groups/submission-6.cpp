class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> res;

      for(auto i:strs){
        vector<int> count(26,0);
        for(auto ch:i){
          count[ch-'a']++;
        }
        string key=to_string(count[0]);
        for(int i=1;i<26;i++){
          key+=','+to_string(count[i]);
        }
        res[key].push_back(i);
      }
      vector<vector<string>> ans;
      for(auto i:res){
        ans.push_back(i.second);
      }
      return ans;
    }
};
