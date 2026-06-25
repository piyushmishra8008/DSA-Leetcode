class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<int>result;
        while(k--){
            int maxfreq=0;
            int element=-1;
            for(auto it:mp){
                if(it.second>maxfreq){
                    maxfreq=it.second;
                    element=it.first;
                }
            }
            result.push_back(element);
            mp.erase(element);
        }
        return result;
    }
};