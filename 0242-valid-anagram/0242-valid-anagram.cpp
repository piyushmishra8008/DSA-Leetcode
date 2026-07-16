class Solution {
public:
    bool isAnagram(string s, string t) {
        //my method
       unordered_map<char,int>mp;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
           if(mp.find(t[j])!=mp.end()){
            mp[t[j]]--;
           }else{
            mp[t[j]]++;
           }
        }
         for(auto it:mp){
            if(it.second>=1){
                return false;
            }
         }
         return true;
    }
};