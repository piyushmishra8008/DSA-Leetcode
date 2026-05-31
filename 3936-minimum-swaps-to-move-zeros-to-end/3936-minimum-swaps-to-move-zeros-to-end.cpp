class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int swap1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=0 && count>0){
                count--;
                swap1++;
            }else if(count>0){
               count--; 
            }
        }
        return swap1++;
    }
};