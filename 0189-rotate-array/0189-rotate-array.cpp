class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
 vector<int>new1(nums.size());
 for(int i=0;i<nums.size();i++){
 new1[(i+k)%nums.size()]=nums[i];
 }
 nums=new1;
}
};