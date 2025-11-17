class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
        vector<int>ans;
        for(int val:nums){
           mp[val]++;
           if(mp[val]>nums.size()/3){
             if (find(ans.begin(), ans.end(), val) == ans.end()) {
                    ans.push_back(val);
                }
           }
        }
        return ans;
    }
};