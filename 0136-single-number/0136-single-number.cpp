class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(int x:nums){
        mp[x]++;
    }
    for(auto val:mp){
        if(val.second==1){
            return val.first;
        }
    }
    return -1;
    }
};