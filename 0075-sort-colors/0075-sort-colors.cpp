class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int n=nums.size();
        int i=0;
        while(i<=high){
            if(nums[i]==2){
                swap(nums[i],nums[high]);
                high--;
                
            }else if(nums[i]==0){
                swap(nums[i],nums[low]);
                low++;
                i++;
            }else{
                i++;
            }
            
        }
    }
};