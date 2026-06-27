class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
      vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(const auto& its:mp){
           if(its.second>n/3){
            ans.push_back(its.first);
           }
        }
        return ans;
    }
};