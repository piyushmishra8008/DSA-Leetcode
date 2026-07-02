class Solution {
public:
    void sortColors(vector<int>& nums) {
      int end=nums.size()-1;
      int n=nums.size();
      int right=0;
      int left=0;
    while(left<=end){
        if(nums[left]==0){
            swap(nums[left],nums[right]);
            right++;
            left++;
        }else if(nums[left]==2){
            swap(nums[left],nums[end]);
            end--;
        }else{
            left++;
        }
      }  
    }
};