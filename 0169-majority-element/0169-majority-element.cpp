class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int count=1;
       int maxi=0;
       if(nums.size()<=1)return nums[0];
   
       for(int i=0;i<nums.size();i++){
        if(maxi>nums.size()/2){
            return nums[i-1];
            break;
        }
        else if(nums[i]==nums[i+1]){
            count++;
            maxi=max(maxi,count);
           
        }
        else{
            count=1;
        }
       } 
       return -1;
    }
};