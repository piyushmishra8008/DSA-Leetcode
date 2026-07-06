class Solution {
public:
int digitrange(int num){
    int mx=0;
    int mn=INT_MAX;
    while(num>0){
        int digit=num%10;
        mx=max(mx,digit);
        mn=min(mn,digit);
        num=num/10;
    }
    return mx-mn;
}
    int maxDigitRange(vector<int>& nums) {
        vector<int>ans;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int r=digitrange(nums[i]);
            ans.push_back(r);
            maxi=max(maxi,r);
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(ans[i]==maxi){
                sum+=nums[i];
            }
        }
      
        return sum;
    }
};