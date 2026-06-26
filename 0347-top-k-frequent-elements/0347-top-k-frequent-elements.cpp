class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int num : nums){
            mp[num]++;
        }
       vector<vector<int>>polling(n+1);
       for(auto it:mp){
        int freq=it.second;
        int value=it.first;
        polling[freq].push_back(value);
       }
       vector<int>result;
         for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int num : polling[i]) {
                result.push_back(num);

                if (result.size() == k)
                    return result;
            }
        }
        return result;
    }
};