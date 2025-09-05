class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zero;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                zero.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero.push_back(nums[i]);
            }
        }
        nums=zero;
    }
};