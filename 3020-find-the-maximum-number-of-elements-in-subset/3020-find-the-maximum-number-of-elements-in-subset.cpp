class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long int,int>mp;
        int result=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp[1]%2){
            result=mp[1];
        }else{
            result=mp[1]-1;
        }
        for(auto it:mp){
            if(it.first==1){
                continue;
            }
        long long curr=it.first;
        int len=0;
        while(mp.count(curr)&&mp[curr]>1){
            len+=2;
            curr=curr*curr;
        }
        if(mp.count(curr) && mp[curr]==1){
            len+=1;
        }else{
            len-=1;
        }
        result=max(result,len);
        }
        return result;
    }
};