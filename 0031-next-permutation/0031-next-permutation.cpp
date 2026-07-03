class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int swapindex=-1;
        int i=nums.size()-1;
        for(;i>0;i--){
            if(nums[i]>nums[i-1]){
                swapindex=i-1;
                break;
            }
        }
        int nextbig=0;;
        if(swapindex!=-1){
            for(int j=nums.size()-1;j>=swapindex+1;j--){
                if(nums[j]>nums[swapindex]){
                nextbig=j;
                break;
                }

            }
        swap(nums[nextbig],nums[swapindex]);
        }
        reverse(nums.begin()+swapindex+1,nums.end());
    }
};