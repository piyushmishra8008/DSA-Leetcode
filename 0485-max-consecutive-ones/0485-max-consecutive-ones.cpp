class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int peak=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                peak++;
                ans=max(ans,peak);
            }
            else{
                peak=0;
            }
        }
        return ans;
    }
};