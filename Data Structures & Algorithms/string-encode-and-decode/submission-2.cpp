class Solution {
public:

    string encode(vector<string>& strs) {
      string str="";
      for(auto word:strs){
       str+=to_string(word.length())+"#"+word;
      }
      return str;
    }

    vector<string> decode(string s) {
        vector<string> str;
        string str_no="";
        string word="";
        int i=0;
    while(i<s.length()){
       while(s[i]!='#'){
        str_no+=s[i];
        i++;
       }
       int no=stoi(str_no);
       str_no="";
       i=i+1;
       for(int j=0;j<no;j++){
        word+=s[i];
        i++;
       }
       str.push_back(word);
       word="";
       
    }
    return str;
    }
};
