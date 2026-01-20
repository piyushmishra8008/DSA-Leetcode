class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(auto it:strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(it);
        }
        for( auto a:mp){
            result.push_back(a.second);
        }
        return result;
    }
};