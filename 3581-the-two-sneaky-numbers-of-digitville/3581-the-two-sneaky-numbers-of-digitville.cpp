class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>answer;
       
        for(int num:nums){
            mp[num]++;
          
        }
        for(auto it:mp){
            if(it.second==2){
                answer.push_back(it.first);
            }
        }
        return answer;
    }
};