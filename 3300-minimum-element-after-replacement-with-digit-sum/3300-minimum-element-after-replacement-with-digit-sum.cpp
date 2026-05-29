class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans;
        for(int i=0;i<n;i++){
            int rem=0;
            while(nums[i]>0){
                rem+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        ans=min(ans,rem);
        }
        return ans;
    }
};