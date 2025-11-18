class Solution {
public:
    int singleNumber(vector<int>& nums) {
    if(nums.size()<=1)return nums[0];
    for(int i=0;i<nums.size();i++){
        int count=2;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count--;
            }
        }
        if(count==1){
            return nums[i];
            break;
        }
    }
    return -1;
    }
};