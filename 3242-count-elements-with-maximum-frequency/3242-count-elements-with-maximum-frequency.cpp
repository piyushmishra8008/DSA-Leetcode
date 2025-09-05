class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int maxi=1;
        for(int num :nums){
            mp[num]++;
            maxi=max(maxi,mp[num]);
            
        }
        int sum=0;
        for(auto it:mp){
            if(maxi==it.second){
                sum+=maxi;
            }
        }
        return sum;
    }
};