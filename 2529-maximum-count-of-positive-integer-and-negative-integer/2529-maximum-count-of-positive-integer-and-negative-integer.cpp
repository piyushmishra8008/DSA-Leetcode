class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nigga=0;
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nigga++;
            }else if(nums[i]>0){
                pos++;
            }
        }
       
        int ans=max(nigga,pos);
        return ans;
    }
};